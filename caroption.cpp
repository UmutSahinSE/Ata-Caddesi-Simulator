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
