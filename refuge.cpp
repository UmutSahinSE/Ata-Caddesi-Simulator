#include "refuge.h"

refuge::refuge()
{
    this->setGeometry(400,400,10,200);
    refugeLine=new QLine(this->x(), this->y()-100, this->x(), this->y()+100);
    refugeImage=new QPixmap(":/pictures/greyRefuge.jpg");

}
