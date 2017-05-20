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
