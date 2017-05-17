#include "zebracrossing.h"

zebracrossing::zebracrossing()
{
    isVerticle=true;
    this->setGeometry(100,100,40,20);
    zebraImage=new QPixmap(":/pictures/zebracrossing.png");
    setPixmap((*zebraImage).scaled(40,20));

}

void zebracrossing::rotate()
{
    if(isVerticle==true)
    {
        isVerticle=false;
        this->setGeometry(x(),y(),20,40);
        QTransform rotatePix;
        QPixmap newpix(zebraImage->transformed(rotatePix.rotate(90)));
        setPixmap(newpix.scaled(20,40));
    }
    else
    {
        isVerticle=true;
        this->setGeometry(x(),y(),40,20);
        setPixmap((*zebraImage).scaled(40,20));
    }
}
