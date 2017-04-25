#ifndef TRAFFICLIGHTOPTIONS_H
#define TRAFFICLIGHTOPTIONS_H

#include <QWidget>

namespace Ui {
class TrafficLightOptions;
}

class TrafficLightOptions : public QWidget
{
    Q_OBJECT

public:
    explicit TrafficLightOptions(QWidget *parent = 0);
    ~TrafficLightOptions();

private:
    Ui::TrafficLightOptions *ui;
};

#endif // TRAFFICLIGHTOPTIONS_H
