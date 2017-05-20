#include "sign.h"

sign::sign()
{
    isStop=false;
    SpeedLimit=60;
    signImage=new QPixmap(":/pictures/60 speed sign.jpg");
    setAccessibleDescription("sign");
    this->setGeometry(100,100,20,20);
    signRect=new QRect(this->x()+25, this->y()+50, this->x()+25, this->y()); 
    this->setPixmap(signImage->scaled(20,20));

}
