#include "roadoptions.h"
#include "ui_roadoptions.h"

CarOptions::CarOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CarOptions)
{
    ui->setupUi(this);
}

CarOptions::~CarOptions()
{
    delete ui;
}
