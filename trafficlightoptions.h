#ifndef TRAFFICLIGHTOPTIONS_H
#define TRAFFICLIGHTOPTIONS_H

#include <QWidget>
#include "trafficlight.h"
#include "mainwindow.h"

namespace Ui {
class TrafficLightOptions;
}

class TrafficLightOptions : public QWidget
{
    Q_OBJECT

public:
    trafficlight *selectedTrafficLight;
    MainWindow *tempMW;
    explicit TrafficLightOptions(QWidget *parent = 0);
    ~TrafficLightOptions();

private slots:
    void on_DeleteButton_clicked();

private:
    Ui::TrafficLightOptions *ui;
signals:
    void pressDelete();
};

#endif // TRAFFICLIGHTOPTIONS_H
