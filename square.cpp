#include "square.h"

Square::Square()
{
    setAccessibleDescription("square");
    this->setGeometry(400,400,160,160);
    squareRect=new QRect(this->x()+80, this->y()+160, this->x()+160, this->y());
    squareImage=new QPixmap(":/pictures/Square.jpg");
    setPixmap((*squareImage).scaled(160,160));


}
