#include "simulationresults.h"
#include "ui_simulationresults.h"

SimulationResults::SimulationResults(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimulationResults)
{
    ui->setupUi(this);
}

SimulationResults::~SimulationResults()
{
    delete ui;
}
