#ifndef TRAFFICLIGHTOPTIONS_H
#define TRAFFICLIGHTOPTIONS_H

#include <QWidget>
#include "trafficlight.h"

namespace Ui {
class TrafficLightOptions;
}

class TrafficLightOptions : public QWidget
{
    Q_OBJECT

public:
    trafficlight *selectedTrafficLight;
    explicit TrafficLightOptions(QWidget *parent = 0);
    ~TrafficLightOptions();

private:
    Ui::TrafficLightOptions *ui;
};

#endif // TRAFFICLIGHTOPTIONS_H
