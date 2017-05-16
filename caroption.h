#ifndef CAROPTION_H
#define CAROPTION_H

#include <QWidget>
#include "carspawn.h"

namespace Ui {
class CarOption;
}

class CarOption : public QWidget
{
    Q_OBJECT

public:
    carspawn *selectedCarSpawn;
    explicit CarOption(QWidget *parent = 0);
    ~CarOption();

private:
    Ui::CarOption *ui;
};

#endif // CAROPTION_H
