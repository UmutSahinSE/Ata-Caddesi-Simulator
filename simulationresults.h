#ifndef SIMULATIONRESULTS_H
#define SIMULATIONRESULTS_H

#include <QWidget>

namespace Ui {
class SimulationResults;
}

class SimulationResults : public QWidget
{
    Q_OBJECT

public:
    explicit SimulationResults(QWidget *parent = 0);
    ~SimulationResults();

private:
    Ui::SimulationResults *ui;
};

#endif // SIMULATIONRESULTS_H
