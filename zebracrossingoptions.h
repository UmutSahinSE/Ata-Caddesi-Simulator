#ifndef ZEBRACROSSINGOPTIONS_H
#define ZEBRACROSSINGOPTIONS_H

#include <QWidget>
#include "zebracrossing.h"
#include "mainwindow.h"

namespace Ui {
class ZebraCrossingOptions;
}

class ZebraCrossingOptions : public QWidget
{
    Q_OBJECT

public:
    zebracrossing *selectedZebraCrossing;
    MainWindow *tempMW;
    explicit ZebraCrossingOptions(QWidget *parent = 0);
    ~ZebraCrossingOptions();

private slots:
    void on_DeleteButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::ZebraCrossingOptions *ui;
signals:
    void pressDelete();
};

#endif // ZEBRACROSSINGOPTIONS_H
