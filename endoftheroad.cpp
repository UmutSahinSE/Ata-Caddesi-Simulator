#include "endoftheroad.h"

endoftheroad::endoftheroad()
{
    isVerticle=false;
    this->setGeometry(100,100,40,10);
    setAccessibleDescription("endoftheroad");
    roadEndImage=new QPixmap(":/pictures/RoadEnd.png");
    setPixmap((*roadEndImage).scaled(40,10));

}

void endoftheroad::rotate()
{
    if(isVerticle==true)
    {
        isVerticle=false;
        this->setGeometry(x(),y(),40,10);
        setPixmap((*roadEndImage).scaled(40,10));
    }
    else
    {
        isVerticle=true;
        this->setGeometry(x(),y(),10,40);
        QTransform rotatePix;
        QPixmap newpix(roadEndImage->transformed(rotatePix.rotate(90)));
        setPixmap(newpix.scaled(10,40));
    }
}
