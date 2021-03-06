#ifndef CARDCREATIONCONTROLLER_H
#define CARDCREATIONCONTROLLER_H
#include <QObject>
#include <QtGlobal>
#include <QMap>
#include <QSharedPointer>
#include "GUI/QmlWidget.h"
#include "Core/translation.h"
#include "Core/world.h"
#include "Core/dbcard.h"
#include <QUuid>

class CardEditionController : public QObject {
 Q_OBJECT
 public:
    CardEditionController(QObject *parent = nullptr);
    World &world;

    Q_INVOKABLE void closeWindow(QQuickWidget *widget);
    Q_INVOKABLE void saveCard(QQuickWidget *widget, QString src, QString tarStr, QString exStr, QUuid id);
 signals:
    void showCards();

 public slots:
    void showNewCardEditWindow(QSharedPointer<Translation> trans);
    void showCardEditWindow(QUuid id);

 private:
    QMap<QmlWidget *, QUuid> data_edit;
    QMap<QmlWidget *, QSharedPointer<Translation> > data_create;
};

#endif // CARDCREATIONCONTROLLER_H
