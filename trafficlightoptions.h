#ifndef TRAFFICLIGHTOPTIONS_H
#define TRAFFICLIGHTOPTIONS_H

#include <QWidget>
#include "trafficlight.h"
#include "mainwindow.h"
#include "mylabel.h"

namespace Ui {
class TrafficLightOptions;
}

class TrafficLightOptions : public QWidget
{
    Q_OBJECT

public:
    trafficlight *selectedTrafficLight;
    MyLabel *buildLabel;
    MainWindow *tempMW;
    explicit TrafficLightOptions(QWidget *parent = 0);
    ~TrafficLightOptions();

private slots:
    void on_DeleteButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_StartSlider_valueChanged(int value);

    void on_GreenSlider_valueChanged(int value);

    void on_RedSlider_valueChanged(int value);

    void on_AppointButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::TrafficLightOptions *ui;
signals:
    void pressDelete();
};

#endif // TRAFFICLIGHTOPTIONS_H
