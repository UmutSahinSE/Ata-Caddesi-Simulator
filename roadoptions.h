#ifndef ROADOPTIONS_H
#define ROADOPTIONS_H

#include <QWidget>
#include "onewayroad.h"
#include "mainwindow.h"
#include "mylabel.h"

namespace Ui {
class Roadoptions;
}

class Roadoptions : public QWidget
{
    Q_OBJECT

public:
    onewayroad *selectedOneWayRoad;
    MyLabel *buildLabel;
    MainWindow *tempMW;
    explicit Roadoptions(QWidget *parent = 0);
    ~Roadoptions();

private slots:

    void on_FlowEast_clicked();

    void on_FlowWest_clicked();

    void on_FlowSouth_clicked();

    void on_FlowNorth_clicked();

    void on_ReplaceButton_clicked();

    void on_DeleteButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Roadoptions *ui;
signals:
    void pressDelete();
};

#endif // ROADOPTIONS_H
