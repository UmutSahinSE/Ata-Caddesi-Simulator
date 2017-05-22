#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <QLabel>
#include <QRect>
#include <QPixmap>
#include "onewayroad.h"



class trafficlight : public QLabel
{
public:
    trafficlight();
    bool isRed;
    int StartFrom;
    int redDuration;
    int greenDuration;
    onewayroad *appointedRoad;


private:
    QPixmap *lightGif;
};

#endif // TRAFFICLIGHT_H
