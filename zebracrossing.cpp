#include "zebracrossing.h"

zebracrossing::zebracrossing()
{
    this->setGeometry(100,100,50,20);
    zebraRect=new QRect(this->x()+25,this->y()+10,this->x()+10,this->y());
    zebraImage=new QPixmap(":/pictures/zebracrossing.png");
    setPixmap((*zebraImage).scaled(50,20));

}
