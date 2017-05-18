#include "intersection.h"

intersection::intersection()
{
    setAccessibleDescription("intersection");
    this->setGeometry(400,400,80,80);
    rectLine=new QRect(this->x()+100, this->y()+100, this->width(), this->height());
    rectImage=new QPixmap(":/pictures/rectangle[737].png");
    setPixmap((*rectImage).scaled(80,80));

}
