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
    connect(buildLabel, SIGNAL(MousePressed()),tempMW,SLOT(ChooseRoad()));
}
