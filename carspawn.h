#ifndef CARSPAWN_H
#define CARSPAWN_H

#include <mainwindow.h>
#include <QLabel>
#include "car.h"
#include "onewayroad.h"
#include "spawnthread.h"
#include "mylabel.h"


class carspawn : public QLabel
{
    Q_OBJECT
public:
    carspawn();
    void rotate();
    void SetupThread(SpawnThread*);
    bool isVerticle;
    int carsPerMinute;
    onewayroad *onRoad;
    MainWindow *tempMw;
    MyLabel *buildLabel;

private:
    QPixmap *carspawnImage;
signals:
    Spawned();

public slots:



};

#endif // CARSPAWN_H
