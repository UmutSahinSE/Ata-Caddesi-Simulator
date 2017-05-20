#ifndef SIGN_H
#define SIGN_H

#include <QLabel>
#include <QRect>
#include <QPixmap>


class sign : public QLabel
{
public:
    bool isStop;
    int SpeedLimit;
    sign();
private:
    QRect *signRect;
    QPixmap *signImage;
};

#endif // SIGN_H
