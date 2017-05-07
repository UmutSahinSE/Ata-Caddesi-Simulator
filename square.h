#include <QImage>

#ifndef SQUARE_H
#define SQUARE_H

#endif // SQUARE_H

class SquareClass
{
private:
    int height;
    int width;
    int location;
public:
    SquareClass()
    {
        height=200;
        width=100;
        location=0;
    }

    int getLocation() {return location;}
};



