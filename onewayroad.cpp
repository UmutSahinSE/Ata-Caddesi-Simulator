#include "onewayroad.h"

onewayroad::onewayroad()
{
    isBlue=true;
    this->setGeometry(400,400,40,200);
    roadLine=new QLine(this->x(), this->y()-100, this->x()-100, this->y()+100);
    roadImage=new QPixmap(":/pictures/One Way Road.png");

}
