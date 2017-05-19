#include "trafficlight.h"

trafficlight::trafficlight()
{
    setAccessibleDescription("trafficlight");
    this->setGeometry(100,100,20,30);
    isRed=true;
    lightGif=new QPixmap(":/pictures/RedLight.png");
    this->setPixmap(lightGif->scaled(20,30));

}
