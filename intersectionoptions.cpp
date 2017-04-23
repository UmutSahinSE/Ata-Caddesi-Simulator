#include "intersectionoptions.h"
#include "ui_intersectionoptions.h"

IntersectionOptions::IntersectionOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IntersectionOptions)
{
    ui->setupUi(this);
}

IntersectionOptions::~IntersectionOptions()
{
    delete ui;
}
