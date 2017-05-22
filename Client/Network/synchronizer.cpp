//
// Created by anna on 04.04.17.
//

#include <QtWidgets/QInputDialog>
#include <QtCore/QSet>
#include <QDebug>
#include <Core/QLSeq.h>
#include "synchronizer.h"
#include "Helpers/configuremanager.h"

Synchronizer::Synchronizer(QObject *parent, NetworkManager * nm) :
        QObject(parent), networkManager_(nm), synchronized_prefix_length(/*ConfigureManager::Instance().getSyncLength()*/ 0     ) {
    qDebug("Synchronizer created");
    connect(networkManager_, &NetworkManager::successLoadChanges,
           this, &Synchronizer::receivedChanges,
           Qt::QueuedConnection);
    connect(networkManager_, &NetworkManager::successSaveChanges,
           this, &Synchronizer::pullSucceeded,
           Qt::QueuedConnection);
    connect(networkManager_, &NetworkManager::failSaveChanges,
           this, &Synchronizer::syncFailed,
           Qt::QueuedConnection);
    connect(networkManager_, &NetworkManager::failLoadChanges,
            this, &Synchronizer::syncFailed,
            Qt::QueuedConnection);
}
Synchronizer::~Synchronizer() {
    qDebug("Synchronizer destroyed");
}
void Synchronizer::pullSucceeded(qint32 requestId) {
    ChangeList updatedClientChanges = clientChanges;
    updatedClientChanges.erase(updatedClientChanges.begin() + synchronized_prefix_length, updatedClientChanges.end());
    updatedClientChanges.append(serverChangesInSync);
    updatedClientChanges.append(suffix);
    synchronized_prefix_length = updatedClientChanges.length();
//    ConfigureManager::Instance().setSyncLength(synchronized_prefix_length); if client is persistent it's makes sense but not now
    suffix.clear();
    emit finishSynchronization(updatedClientChanges);
}
void Synchronizer::syncFailed(qint32 requestId, RPCErrorStatus status) {
    synchronize(clientChanges);
}
void Synchronizer::receivedChanges(qint32 requestId, ChangeList serverSuffix) {
    suffix.clear();
    ChangeList clientSuffix;

    for (int i = synchronized_prefix_length; i < clientChanges.length(); i++) {
        bool include = true;
        for (int j = i; j < clientChanges.length(); j++) {
            if (clientChanges[i]->compare(clientChanges[j]) == CONFLICT) {
                include = false;
                break;
            }
        }
        if (include) {
            clientSuffix.append(clientChanges[i]);
        }
    }

    for (int i = 0; i < clientSuffix.length(); i++) {
        int last_conflict = -1;
        for (int j = 0; j < serverSuffix.length(); j++) {
            CMP changes_are = serverSuffix[j]->compare(clientSuffix[i]);
            if (changes_are == CONFLICT) {
                last_conflict = j;
            }
        }
        if (last_conflict == -1) {
            suffix.append(clientSuffix[i]);
        } else {
            // TODO: alert window with Cards for choosing the one.
            // Now alert just dialog window with option "Client" or "Server"
            QStringList items;
            items << "Server" << "Client";

            QString choice = QInputDialog::getItem(nullptr, "Choose item", "", items, 0, false);
            suffix.append((choice == "Client") ? clientSuffix[i] : serverSuffix[last_conflict]);
            if (choice == "Client") {
                suffix.append(clientSuffix[i]);
            }
        }
    }
    serverChangesInSync = serverSuffix;
    networkManager_->saveChanges(suffix, synchronized_prefix_length + serverSuffix.length());
}

qint32 Synchronizer::synchronize(ChangeList fullClientHistory) {
    qDebug("Synchronization started");
    clientChanges = fullClientHistory;
    qDebug() << synchronized_prefix_length;
    networkManager_->loadChanges(synchronized_prefix_length);
}