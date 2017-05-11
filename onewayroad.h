#ifndef ONEWAYROAD_H
#define ONEWAYROAD_H

#include <QLabel>
#include <QLine>
#include <QPixmap>


class onewayroad : public QLabel
{
public:
    onewayroad();
    void convertToRed();

private:
    bool isBlue;
    QLine *roadLine;
    QPixmap *blueRoadImage;
    QPixmap *redRoadImage;
};

#endif // ONEWAYROAD_H
