#include "onewayroad.h"

onewayroad::onewayroad()
{
    roadAngle=90;
    this->setGeometry(300,300,40,200);
    Length=200;
    this->setAccessibleDescription("onewayroad");
    roadLine=new QLine(this->x()+20, this->y()+Length, this->x()+20, this->y());
    blueRoadImage=new QPixmap(":/pictures/One Way Road.png");
    setPixmap((*blueRoadImage).scaled(40,Length));
}

void onewayroad::rotateNorth()
{
    if(roadAngle==90) return;
    if(roadAngle==0)
    { 
        roadAngle=90;
        setGeometry(x()+(Length/2-20),y()-(Length/2-20),40,Length);
        roadLine->setLine(this->x()+20, this->y()+Length, this->x()+20, this->y());
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(0)));
        setPixmap(newpix.scaled(40,Length));
        return;
    }
    if(roadAngle==180)
    {
        roadAngle=90;
        setGeometry(x()+(Length/2-20),y()-(Length/2-20),40,Length);
        roadLine->setLine(this->x()+20, this->y()+Length, this->x()+20, this->y());
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(0)));
        setPixmap(newpix.scaled(40,Length));
        return;
    }
    if(roadAngle==270)
    {
        roadAngle=90;
        roadLine->setPoints(roadLine->p2(),roadLine->p1());
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(0)));
        setPixmap(newpix.scaled(40,Length));
        return;
    }
}

void onewayroad::rotateSouth()
{
    if(roadAngle==270) return;
    if(roadAngle==90)
    {
        roadAngle=270;
        roadLine->setPoints(roadLine->p2(),roadLine->p1());
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(180)));
        setPixmap(newpix.scaled(40,Length));
        return;
    }
    if(roadAngle==0)
    {
        roadAngle=270;
        setGeometry(x()+(Length/2-20),y()-(Length/2-20),40,Length);
        roadLine->setLine(this->x()+20, this->y(), this->x()+20, this->y()+Length);
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(180)));
        setPixmap(newpix.scaled(40,Length));
        return;
    }
    if(roadAngle==180)
    {
        roadAngle=270;
        setGeometry(x()+(Length/2-20),y()-(Length/2-20),40,Length);
        roadLine->setLine(this->x()+20, this->y(), this->x()+20, this->y()+180);
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(180)));
        setPixmap(newpix.scaled(40,Length));
        return;
    }


}

void onewayroad::rotateEast()
{
    if(roadAngle==0) return;
    if(roadAngle==90)
    {
        roadAngle=0;
        setGeometry(x()-(Length/2-20),y()+(Length/2-20),Length,40);
        roadLine->setLine(this->x(), this->y()+20, this->x()+Length, this->y()+20);
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(90)));
        setPixmap(newpix.scaled(Length,40));
    }
    if(roadAngle==180)
    {
        roadAngle=0;
        roadLine->setPoints(roadLine->p2(),roadLine->p1());
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(90)));
        setPixmap(newpix.scaled(Length,40));
        return;
    }
    if(roadAngle==270)
    {
        roadAngle=0;
        setGeometry(x()-(Length/2-20),y()+(Length/2-20),Length,40);
        roadLine->setLine(this->x(), this->y()+20, this->x()+Length, this->y()+20);
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(90)));
        setPixmap(newpix.scaled(Length,40));
        return;
    }
}

void onewayroad::rotateWest()
{
    if(roadAngle==180) return;
    if(roadAngle==0)
    {
        roadAngle=180;
        roadLine->setPoints(roadLine->p2(),roadLine->p1());
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(270)));
        setPixmap(newpix.scaled(Length,40));
    }
    if(roadAngle==90)
    {
        roadAngle=180;
        setGeometry(x()-(Length/2-20),y()+(Length/2-20),Length,40);
        roadLine->setLine(this->x()+Length, this->y()+20, this->x(), this->y()+20);
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(270)));
        setPixmap(newpix.scaled(Length,40));
        return;
    }
    if(roadAngle==270)
    {
        roadAngle=180;
        setGeometry(x()-(Length/2-20),y()+(Length/2-20),Length,40);
        roadLine->setLine(this->x()+200, this->y()+20, this->x(), this->y()+20);
        QTransform rotatePix;
        QPixmap newpix(blueRoadImage->transformed(rotatePix.rotate(270)));
        setPixmap(newpix.scaled(200,40));
        return;
    }
}

