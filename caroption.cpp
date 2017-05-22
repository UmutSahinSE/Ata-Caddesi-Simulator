#include "caroption.h"
#include "ui_caroption.h"

CarOption::CarOption(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CarOption)
{
    ui->setupUi(this);
}

CarOption::~CarOption()
{
    delete ui;
}

void CarOption::on_pushButton_clicked()
{
    delete selectedCarSpawn;
    emit pressDelete();
}

void CarOption::on_horizontalSlider_valueChanged(int value)
{
    value=value*6/10;
    selectedCarSpawn->carsPerMinute=value;
    ui->CarsPerMinuteLabel->setText(QString::number(value));
}
