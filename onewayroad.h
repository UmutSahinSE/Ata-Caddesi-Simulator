#ifndef ONEWAYROAD_H
#define ONEWAYROAD_H

#include <QLabel>
#include <QLine>


class onewayroad : public QLabel
{
public:
    onewayroad();
private:
    bool isBlue;
    QLine *roadLine;
    QPixmap *roadImage;
};

#endif // ONEWAYROAD_H
