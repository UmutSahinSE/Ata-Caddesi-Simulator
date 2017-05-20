#include "squareoptions.h"
#include "ui_squareoptions.h"

squareOptions::squareOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::squareOptions)
{
    ui->setupUi(this);
}

squareOptions::~squareOptions()
{
    delete ui;
}

void squareOptions::on_pushButton_clicked()
{
    delete selectedSquare;
    emit pressDelete();
}
