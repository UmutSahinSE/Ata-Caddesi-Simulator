#include "zebracrossingoptions.h"
#include "ui_zebracrossingoptions.h"

ZebraCrossingOptions::ZebraCrossingOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZebraCrossingOptions)
{
    ui->setupUi(this);
}

ZebraCrossingOptions::~ZebraCrossingOptions()
{
    delete ui;
}

void ZebraCrossingOptions::on_DeleteButton_clicked()
{
    delete selectedZebraCrossing;
    emit pressDelete();
}

void ZebraCrossingOptions::on_horizontalSlider_valueChanged(int value)
{
    value=value*6/10;
    selectedZebraCrossing->PedestrianPerMinute=value;
    ui->Pedestrianlabel->setText(QString::number(value));
}
