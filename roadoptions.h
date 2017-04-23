#ifndef CAROPTIONS_H
#define CAROPTIONS_H

#include <QWidget>

namespace Ui {
class CarOptions;
}

class CarOptions : public QWidget
{
    Q_OBJECT

public:
    explicit CarOptions(QWidget *parent = 0);
    ~CarOptions();

private:
    Ui::CarOptions *ui;
};

#endif // CAROPTIONS_H
