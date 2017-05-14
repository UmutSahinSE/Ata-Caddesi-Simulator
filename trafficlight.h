#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <QLabel>
#include <QRect>
#include <QPixmap>



class trafficlight : public QLabel
{
public:
    trafficlight();
private:
    QRect *lightRect;
    QPixmap *lightGif;
};

#endif // TRAFFICLIGHT_H
