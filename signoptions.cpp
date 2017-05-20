#include "signoptions.h"
#include "ui_signoptions.h"

SignOptions::SignOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignOptions)
{
    ui->setupUi(this);
}

SignOptions::~SignOptions()
{
    delete ui;
}

void SignOptions::on_pushButton_clicked()
{
    selectedSign->isStop=false;
    selectedSign->SpeedLimit=30;
    QPixmap signImage(":/pictures/30mph-speed-limit-sign.jpg");
    selectedSign->setPixmap(signImage.scaled(20,20));
}

void SignOptions::on_pushButton_3_clicked()
{
    selectedSign->isStop=false;
    selectedSign->SpeedLimit=60;
    QPixmap signImage(":/pictures/60 speed sign.jpg");
    selectedSign->setPixmap(signImage.scaled(20,20));
}

void SignOptions::on_pushButton_4_clicked()
{
    selectedSign->isStop=false;
    selectedSign->SpeedLimit=90;
    QPixmap signImage(":/pictures/90 sign.png");
    selectedSign->setPixmap(signImage.scaled(20,20));
}

void SignOptions::on_pushButton_5_clicked()
{
    selectedSign->isStop=false;
    selectedSign->SpeedLimit=90;
    QPixmap signImage(":/pictures/120 sign.png");
    selectedSign->setPixmap(signImage.scaled(20,20));
}

void SignOptions::on_pushButton_2_clicked()
{
    selectedSign->isStop=true;
    QPixmap signImage(":/pictures/stopsign.png");
    selectedSign->setPixmap(signImage.scaled(20,20));
}

void SignOptions::on_DeleteButton_clicked()
{
    delete selectedSign;
    emit pressDelete();
}
