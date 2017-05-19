#ifndef SQUARE_H
#define SQUARE_H

#include <QLabel>
#include <QPixmap>
#include <QRect>


class Square : public QLabel
{
public:
    Square();
    QRect *squareRect;
    QPixmap *squareImage;
private:


};

#endif // SQUARE_H
