#ifndef SQUARE_H
#define SQUARE_H

#include <QLabel>
#include <QPixmap>
#include <QRect>


class Square : public QLabel
{
public:
    Square();
private:
    QRect *squareRect;
    QPixmap *squareImage;

};

#endif // SQUARE_H
