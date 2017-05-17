#include "zebracrossing.h"

zebracrossing::zebracrossing()
{
    this->setGeometry(100,100,40,20);
    zebraRect=new QRect(this->x()+20,this->y()+10,this->x()+10,this->y());
    zebraImage=new QPixmap(":/pictures/zebracrossing.png");
    setPixmap((*zebraImage).scaled(40,20));

}
