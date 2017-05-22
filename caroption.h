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

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::CarOption *ui;
signals:
    void pressDelete();

};

#endif // CAROPTION_H
