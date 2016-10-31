#ifndef WORLD_H
#define WORLD_H
#include <QMap>
#include <QUuid>
#include "dbcard.h"
#include "card.h"
#include <QSharedPointer>

class World {
 public:
    World();
    QMap<QUuid, QSharedPointer<DBCard>> cards;
    QVector<QSharedPointer<IChange>> changes;

    QUuid createCard();
    void deleteCard(QUuid id);

    void setSource(QUuid cardId, QString newSource);
    void setExamples(QUuid cardId, QStringList newExamples);
    void setTarget(QUuid cardId, QStringList newTarget);
    void editElem(QUuid cardId, const enum Field & fieldName, const QString & newElem, qint32 pos);
    void deleteElem(QUuid cardId, const enum Field & fieldName, qint32  pos);
    void insertElem(QUuid cardId, const enum Field & fieldName, const QString  &insertingElem, qint32 pos);

    void saveToDB();
    void applyChanges();
};

#endif // WORLD_H