#ifndef ROADOPTIONS_H
#define ROADOPTIONS_H

#include <QWidget>
#include "onewayroad.h"

namespace Ui {
class Roadoptions;
}

class Roadoptions : public QWidget
{
    Q_OBJECT

public:
    onewayroad *selectedOneWayRoad;
    explicit Roadoptions(QWidget *parent = 0);
    ~Roadoptions();

private slots:

    void on_FlowEast_clicked();

    void on_FlowWest_clicked();

    void on_FlowSouth_clicked();

    void on_FlowNorth_clicked();

private:
    Ui::Roadoptions *ui;
};

#endif // ROADOPTIONS_H
