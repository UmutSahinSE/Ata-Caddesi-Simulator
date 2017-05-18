#include "refuge.h"

refuge::refuge()
{
    setAccessibleDescription("refuge");
    this->setGeometry(400,400,20,200);
    refugeLine=new QLine(this->x()+10, this->y()+200, this->x()+10, this->y());
    refugeImage=new QPixmap(":/pictures/greyRefuge.jpg");
    this->setPixmap(refugeImage->scaled(20,200));

}
