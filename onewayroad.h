#ifndef ONEWAYROAD_H
#define ONEWAYROAD_H

#include <QLabel>
#include <QLine>
#include <QPixmap>


class onewayroad : public QLabel
{
public:
    onewayroad();
    void rotateNorth();
    void rotateSouth();
    void rotateEast();
    void rotateWest();
    int roadAngle;
    QLine *roadLine;
private:


    QPixmap *blueRoadImage;
};

#endif // ONEWAYROAD_H
