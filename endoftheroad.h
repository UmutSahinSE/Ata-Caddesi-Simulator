#ifndef ENDOFTHEROAD_H
#define ENDOFTHEROAD_H

#include <QLabel>
#include <QRect>


class endoftheroad : public QLabel
{
public:
    endoftheroad();
private:
    QRect *roadEndRect;
    QPixmap *roadEndImage;
};

#endif // ENDOFTHEROAD_H
