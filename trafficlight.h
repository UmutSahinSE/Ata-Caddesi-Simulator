#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <QLabel>
#include <QRect>
#include <QPixmap>



class trafficlight : public QLabel
{
public:
    trafficlight();
    bool isRed;
private:
    QPixmap *lightGif;
};

#endif // TRAFFICLIGHT_H
