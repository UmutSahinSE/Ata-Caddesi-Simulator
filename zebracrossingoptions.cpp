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
