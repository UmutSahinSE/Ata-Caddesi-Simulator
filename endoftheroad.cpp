#include "endoftheroad.h"

endoftheroad::endoftheroad()
{
    this->setGeometry(100,100,40,10);
    roadEndRect=new QRect(this->x()+20,this->y()+5,this->x()+5,this->y());
    roadEndImage=new QPixmap(":/pictures/RoadEnd.png");
    setPixmap((*roadEndImage).scaled(40,10));

}
