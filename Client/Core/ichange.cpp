//
// Created by anna on 03.04.17.
//


#include "ichange.h"
#include "Helpers/protobuf_converter.h"
#include <QDebug>

IChange::~IChange() {}
IChange::IChange(roosha::Change change) : rawChange(change) {}
CMP IChange::compare(QSharedPointer<IChange> otherChange) {
    roosha::Change ch1 = this->rawChange;
    roosha::Change ch2 = otherChange->rawChange;
    if (ch1.change_case() != roosha::Change::kCardChange ||
        ch2.change_case() != roosha::Change::kCardChange)
        return DIFFER; // изменения прогресса и т.д. не конфликтуют, то есть нас интресует только случай, когда оба изменения -- изменения карточек

    roosha::CardChange cch1 = ch1.cardchange();
    roosha::CardChange cch2 = ch2.cardchange();
    if (cch1.cardid() != cch2.cardid() || cch1.change_case() != cch2.change_case())
        return DIFFER;
    roosha::CardChange::ChangeCase changeCase = cch1.change_case();
    if (changeCase == roosha::CardChange::kChangeSource) {
        if (cch1.changesource().newsource() == cch2.changesource().newsource())
            return EQUAL;
        else {
            qDebug() << "conflict: " << QString::fromStdString(cch1.cardid()) << " in Source " <<
                     QString::fromStdString(cch1.changesource().newsource()) << " VS " << QString::fromStdString(cch1.changesource().newsource());
            return CONFLICT;
        }
    }
    if (changeCase == roosha::CardChange::kEditElem) {
        if (cch1.editelem().field() == cch2.editelem().field() && cch1.editelem().position() == cch2.editelem().position()) {
            if (cch1.editelem().value() == cch2.editelem().value())
                return EQUAL;
            else {
                qDebug() << "conflict: " << QString::fromStdString(cch1.cardid()) << " in "
                         << ProtobufConverter::rooshaFieldToString(cch1.editelem().field()) << " "
                         << QString::fromStdString(cch1.editelem().value()) << " VS " << QString::fromStdString(cch2.editelem().value()) ;
                return CONFLICT;
            }
        }
    }
    return DIFFER;
}

Deletion IChange::checkForDeletion(QSharedPointer<IChange> otherChange) {
    if (isFirstDeletedBySecond(this->rawChange, otherChange->rawChange)) {
        return OTHER_DELETES_THIS;
    } else if (isFirstDeletedBySecond(otherChange->rawChange, this->rawChange)) {
        return THIS_DELETES_OTHER;
    } else {
        return NONE;
    }
}

bool IChange::isFirstDeletedBySecond(const roosha::Change &first, const roosha::Change &second) {
    if (second.change_case() != roosha::Change::kCardChange) return false;
    roosha::CardChange cch2 = second.cardchange();
    if (cch2.change_case() == roosha::CardChange::kDeleteCard) {
        std::string cardId1 = (first.change_case() == roosha::Change::kCardChange)
                              ? first.cardchange().cardid()
                              : first.scrutiny().cardid();
        std::string cardId2 = cch2.cardid();
        return cardId1 == cardId2;
    } else if (cch2.change_case() == roosha::CardChange::kDeleteElem) {
        if (first.change_case() != roosha::Change::kCardChange) return false;
        roosha::CardChange cch1 = first.cardchange();
        return cch1.change_case() == roosha::CardChange::kEditElem &&
                cch1.cardid() == cch2.cardid() &&
                cch1.editelem().field() == cch2.deleteelem().field();

    } else {
        return false;
    }
}