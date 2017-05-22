#ifndef SPAWNTHREAD_H
#define SPAWNTHREAD_H

#include <QObject>
#include <QThread>
#include "car.h"
#include "mylabel.h"


class SpawnThread : public QThread
{
    Q_OBJECT
public:
    bool isVerticle;
    int carsPerMinute;
    QPoint Location;
    onewayroad *onRoad;
    MyLabel *buildLabel;
    void TakeVariables(bool verticle,int cars,MyLabel *mylabel);
    SpawnThread();
    void run();
public slots:
    void startFunction();
};

#endif // SPAWNTHREAD_H
