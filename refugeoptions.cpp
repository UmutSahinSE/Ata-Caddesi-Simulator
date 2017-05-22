#include "refugeoptions.h"
#include "ui_refugeoptions.h"

RefugeOptions::RefugeOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RefugeOptions)
{
    ui->setupUi(this);
}

RefugeOptions::~RefugeOptions()
{
    delete ui;
}

void RefugeOptions::on_pushButton_3_clicked()
{
    delete selectedRefuge;
    emit pressDelete();
}

void RefugeOptions::on_pushButton_clicked()
{
    if(selectedRefuge->isVerticle)
    {
        selectedRefuge->isVerticle=false;
        selectedRefuge->setGeometry(selectedRefuge->x()-(selectedRefuge->length/2-10),selectedRefuge->y()+(selectedRefuge->length/2-10),selectedRefuge->length,20);
        QPixmap refugeImage(":/pictures/greyRefuge.jpg");
        QTransform rotatePix;
        QPixmap newpix(refugeImage.transformed(rotatePix.rotate(90)));
        selectedRefuge->setPixmap(newpix.scaled(selectedRefuge->length,20));
    }
    else
    {
        selectedRefuge->isVerticle=true;
        selectedRefuge->setGeometry(selectedRefuge->x()+(selectedRefuge->length/2-10),selectedRefuge->y()-(selectedRefuge->length/2-10),20,selectedRefuge->length);
        QPixmap refugeImage(":/pictures/greyRefuge.jpg");
        selectedRefuge->setPixmap(refugeImage.scaled(20,selectedRefuge->length));
    }
}

void RefugeOptions::on_horizontalSlider_valueChanged(int value)
{
    value=value*20+80;
    if(!selectedRefuge->isVerticle)
    {
       selectedRefuge->resize(value,20);
        QPixmap road(":/pictures/greyRefuge.jpg");
        QTransform rotatePix;
        QPixmap newpix(road.transformed(rotatePix.rotate(90)));
        selectedRefuge->setPixmap(newpix.scaled(value,20));
        selectedRefuge->length=value;
    }
    else
    {
        selectedRefuge->resize(20,value);
        QPixmap road(":/pictures/greyRefuge.jpg");
        selectedRefuge->setPixmap(road.scaled(20,value));
        selectedRefuge->length=value;
    }
    ui->LengthLabel->setText(QString::number(value));
}

void RefugeOptions::on_pushButton_2_clicked()
{
    connect(buildLabel, SIGNAL(MousePressed()),tempMW,SLOT(ReplaceRefuge()));
}
