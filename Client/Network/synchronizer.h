//
// Created by anna on 04.04.17.
//

#ifndef ROOSHA_CLIENT_SYNCHRONIZER_H
#define ROOSHA_CLIENT_SYNCHRONIZER_H


#include <QtCore/QObject>
#include <Core/ichange.h>
#include "error_status.h"
#include "network_manager.h"


class Synchronizer: public QObject {
 Q_OBJECT

 public:
    void synchronize(ChangeList fullClientHistory);
    Synchronizer(QObject *parent = Q_NULLPTR, NetworkManager * nm =Q_NULLPTR);
    ~Synchronizer();

public slots:
    void receivedChanges(qint32 requestId, ChangeList serverSuffix);
    void pullSucceeded(qint32 requestId);
    void syncFailed(qint32 requestId, RPCErrorStatus status);
    void resetSyncPrefix();

 signals:
    void finishSynchronization(ChangeList changes);
private:
    ChangeList clientChanges;
    ChangeList serverChangesInSync;
    ChangeList suffix;
    NetworkManager *networkManager_;
    qint32 synchronized_prefix_length;
};


#endif //ROOSHA_CLIENT_SYNCHRONIZER_H
