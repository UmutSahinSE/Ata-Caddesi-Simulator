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


void TrafficLightOptions::on_StartSlider_valueChanged(int value)
{
    if(selectedTrafficLight->isRed)
    {
        value=value*selectedTrafficLight->redDuration/100;
        if(value>selectedTrafficLight->redDuration)
            value=selectedTrafficLight->redDuration;
        selectedTrafficLight->StartFrom=value;
    }
    else
    {
        value=value*selectedTrafficLight->greenDuration/100;
        if(value>selectedTrafficLight->greenDuration)
            value=selectedTrafficLight->greenDuration;
        selectedTrafficLight->StartFrom=value;
    }
    ui->StartNum->setText(QString::number(value));
}

void TrafficLightOptions::on_GreenSlider_valueChanged(int value)
{
    value=value*6/10;
    selectedTrafficLight->greenDuration=value;
    if(selectedTrafficLight->StartFrom>value)
    {
        selectedTrafficLight->StartFrom=value;
        ui->StartNum->setText(QString::number(value));
    }

    ui->GreenNum->setText(QString::number(value));
}

void TrafficLightOptions::on_RedSlider_valueChanged(int value)
{
    value=value*6/10;
    selectedTrafficLight->redDuration=value;
    if(selectedTrafficLight->StartFrom>value)
    {
        selectedTrafficLight->StartFrom=value;
        ui->StartNum->setText(QString::number(value));
    }
    ui->RedNum->setText(QString::number(value));
}

void TrafficLightOptions::on_AppointButton_clicked()
{
    connect(buildLabel,SIGNAL(MousePressed()),tempMW,SLOT(AppointRoad()));
}

void TrafficLightOptions::on_pushButton_2_clicked()
{
    if(selectedTrafficLight->isRed)
    {
       selectedTrafficLight->isRed=false;
       QPixmap lightGif(":/pictures/Green Light.png");
       selectedTrafficLight->setPixmap(lightGif.scaled(20,30));
       if(selectedTrafficLight->StartFrom>selectedTrafficLight->greenDuration)
       {
           selectedTrafficLight->StartFrom=selectedTrafficLight->greenDuration;
           ui->StartNum->setText(QString::number(selectedTrafficLight->greenDuration));
       }
    }


}

void TrafficLightOptions::on_pushButton_clicked()
{
    if(!selectedTrafficLight->isRed)
    {
        selectedTrafficLight->isRed=true;
        QPixmap lightGif(":/pictures/RedLight.png");
        selectedTrafficLight->setPixmap(lightGif.scaled(20,30));
        if(selectedTrafficLight->StartFrom>selectedTrafficLight->redDuration)
        {
            selectedTrafficLight->StartFrom=selectedTrafficLight->redDuration;
            ui->StartNum->setText(QString::number(selectedTrafficLight->redDuration));
        }
    }

}
