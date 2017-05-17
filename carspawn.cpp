#include "carspawn.h"

carspawn::carspawn()
{
    isVerticle=false;
    this->setGeometry(100,100,40,10);
    setAccessibleDescription("carspawn");
    carspawnImage=new QPixmap(":/pictures/CarSpawn.png");
    setPixmap((*carspawnImage).scaled(40,10));

}
void carspawn::rotate()
{
    if(isVerticle==true)
    {
        isVerticle=false;
        this->setGeometry(x(),y(),40,10);
        setPixmap((*carspawnImage).scaled(40,10));
    }
    else
    {
        isVerticle=true;
        this->setGeometry(x(),y(),10,40);
        QTransform rotatePix;
        QPixmap newpix(carspawnImage->transformed(rotatePix.rotate(90)));
        setPixmap(newpix.scaled(10,40));
    }
}
