#ifndef ENDOFTHEROADOPTIONS_H
#define ENDOFTHEROADOPTIONS_H

#include <QWidget>
#include "endoftheroad.h"

namespace Ui {
class EndOfTheRoadOptions;
}

class EndOfTheRoadOptions : public QWidget
{
    Q_OBJECT

public:
    endoftheroad *selectedEndOfTheRoad;
    explicit EndOfTheRoadOptions(QWidget *parent = 0);
    ~EndOfTheRoadOptions();

private:
    Ui::EndOfTheRoadOptions *ui;
};

#endif // ENDOFTHEROADOPTIONS_H
