#include "carspawn.h"

carspawn::carspawn()
{
    this->setGeometry(100,100,40,10);
    carspawnRect=new QRect(this->x()+20,this->y()+5,this->x()+5,this->y());
    carspawnImage=new QPixmap(":/pictures/CarSpawn.png");
    setPixmap((*carspawnImage).scaled(40,10));

}
