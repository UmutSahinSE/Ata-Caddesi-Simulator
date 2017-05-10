#include "roadoptions.h"
#include "ui_roadoptions.h"

Roadoptions::Roadoptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roadoptions)
{
    ui->setupUi(this);
}

Roadoptions::~Roadoptions()
{
    delete ui;
}
