#include "trafficlightoptions.h"
#include "ui_trafficlightoptions.h"

TrafficLightOptions::TrafficLightOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrafficLightOptions)
{
    ui->setupUi(this);
}

TrafficLightOptions::~TrafficLightOptions()
{
    delete ui;
}

void TrafficLightOptions::on_DeleteButton_clicked()
{
    delete selectedTrafficLight;
    emit pressDelete();
}
