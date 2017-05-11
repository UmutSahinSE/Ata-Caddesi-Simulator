#include "intersection.h"

intersection::intersection()
{
    this->setGeometry(400,400,80,80);
    rectLine=new QRect(this->x()+100, this->y()+100, this->width(), this->height());
    rectImage=new QPixmap(""); // Add intersection sign image!!! //

}
