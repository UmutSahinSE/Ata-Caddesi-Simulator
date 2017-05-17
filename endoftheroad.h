#ifndef ENDOFTHEROAD_H
#define ENDOFTHEROAD_H

#include <QLabel>
#include <QRect>


class endoftheroad : public QLabel
{
public:
    endoftheroad();
    void rotate();
    bool isVerticle;
private:
    QPixmap *roadEndImage;
};

#endif // ENDOFTHEROAD_H
