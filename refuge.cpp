#include "refuge.h"

refuge::refuge()
{
    setAccessibleDescription("refuge");
    this->setGeometry(400,400,20,200);
    refugeImage=new QPixmap(":/pictures/greyRefuge.jpg");
    this->setPixmap(refugeImage->scaled(20,200));
    isVerticle=true;
    length=200;
}
