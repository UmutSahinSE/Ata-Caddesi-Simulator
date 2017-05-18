#include "trafficlight.h"

trafficlight::trafficlight()
{
    setAccessibleDescription("trafficlight");
    this->setGeometry(100,100,20,50);
    lightRect=new QRect(this->x()+10, this->y()+50, this->x()+10, this->y());
    lightGif=new QPixmap(":/pictures/trafficlight.png");
    this->setPixmap(lightGif->scaled(20,50));

}
