#include "sign.h"

sign::sign()
{
    setAccessibleDescription("sign");
    this->setGeometry(100,100,20,20);
    signRect=new QRect(this->x()+25, this->y()+50, this->x()+25, this->y());
    signImage=new QPixmap(":/pictures/stopsign.png");
    this->setPixmap(signImage->scaled(20,20));

}
