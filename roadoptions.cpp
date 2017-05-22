#include "roadoptions.h"
#include "ui_roadoptions.h"

Roadoptions::Roadoptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roadoptions)
{
    ui->setupUi(this);
}

Roadoptions::~Roadoptions()
{
    delete ui;
}

void Roadoptions::on_FlowEast_clicked()
{
    selectedOneWayRoad->rotateEast();
}

void Roadoptions::on_FlowWest_clicked()
{
    selectedOneWayRoad->rotateWest();
}

void Roadoptions::on_FlowSouth_clicked()
{
    selectedOneWayRoad->rotateSouth();
}

void Roadoptions::on_FlowNorth_clicked()
{
    selectedOneWayRoad->rotateNorth();
}

void Roadoptions::on_ReplaceButton_clicked()
{
    connect(buildLabel, SIGNAL(MousePressed()),tempMW,SLOT(ReplaceRoad()));
}

void Roadoptions::on_DeleteButton_clicked()
{
    delete selectedOneWayRoad;
    emit pressDelete();
}

void Roadoptions::on_horizontalSlider_valueChanged(int value)
{
    value=value*20+80;
    if(selectedOneWayRoad->roadAngle==90)
    {
        selectedOneWayRoad->resize(40,value);
        QPixmap road(":/pictures/One Way Road.png");
        selectedOneWayRoad->setPixmap(road.scaled(40,value));
        selectedOneWayRoad->Length=value;
    }
    else if(selectedOneWayRoad->roadAngle==270)
    {
        selectedOneWayRoad->resize(40,value);
        QPixmap road(":/pictures/One Way Road.png");
        QTransform rotatePix;
        QPixmap newpix(road.transformed(rotatePix.rotate(180)));
        selectedOneWayRoad->setPixmap(newpix.scaled(40,value));
        selectedOneWayRoad->Length=value;
    }
    else if(selectedOneWayRoad->roadAngle==180)
    {
        selectedOneWayRoad->resize(value,40);
        QPixmap road(":/pictures/One Way Road.png");
        QTransform rotatePix;
        QPixmap newpix(road.transformed(rotatePix.rotate(270)));
        selectedOneWayRoad->setPixmap(newpix.scaled(value,40));
         selectedOneWayRoad->Length=value;
    }
    else if(selectedOneWayRoad->roadAngle==0)
    {
        selectedOneWayRoad->resize(value,40);
        QPixmap road(":/pictures/One Way Road.png");
        QTransform rotatePix;
        QPixmap newpix(road.transformed(rotatePix.rotate(90)));
        selectedOneWayRoad->setPixmap(newpix.scaled(value,40));
         selectedOneWayRoad->Length=value;
    }
    ui->LengthLabel->setText(QString::number(value));
}
