#include "sign.h"

sign::sign()
{
    this->setGeometry(100,100,50,50);
    signRect=new QRect(this->x()+25, this->y()+50, this->x()+25, this->y());
    signImage=new QPixmap(":/pictures/stopsign.png");
    this->setPixmap(signImage->scaled(50,50));

}
