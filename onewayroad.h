#include <QImage>

#ifndef ONEWAYROAD_H
#define ONEWAYROAD_H

#endif // ONEWAYROAD_H

class OneWayRoadClass
{
private:
    int height;
    int width;
    int location;
public:
    OneWayRoadClass()
    {
        height=200;
        width=100;
        location=0;
    }
    int getlocation() {return location;}
};
