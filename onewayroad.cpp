#include "onewayroad.h"

onewayroad::onewayroad()
{
    isBlue=true;
    this->setGeometry(300,300,40,200);
    roadLine=new QLine(this->x()+20, this->y()+200, this->x()+20, this->y());
    blueRoadImage=new QPixmap(":/pictures/One Way Road.png");
    setPixmap((*blueRoadImage).scaled(40,200));
    redRoadImage=new QPixmap(":/pictures/One Way Road (Back).png");

}

void onewayroad::convertToRed()
{
    isBlue=false;
    QLine *copy= new QLine(roadLine->x2(),roadLine->y2(),roadLine->x1(),roadLine->y1());
    roadLine->setLine(copy->x1(),copy->y1(),copy->x2(),copy->y2());
    delete copy;
    setPixmap((*redRoadImage).scaled(this->width(),this->height()));
}
