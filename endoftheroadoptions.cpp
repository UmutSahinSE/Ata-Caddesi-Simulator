#include "endoftheroadoptions.h"
#include "ui_endoftheroadoptions.h"

EndOfTheRoadOptions::EndOfTheRoadOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EndOfTheRoadOptions)
{
    ui->setupUi(this);
}

EndOfTheRoadOptions::~EndOfTheRoadOptions()
{
    delete ui;
}

void EndOfTheRoadOptions::on_DeleteButton_clicked()
{
    delete selectedEndOfTheRoad;
    emit pressDelete();
}
