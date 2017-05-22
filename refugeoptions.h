#ifndef REFUGEOPTIONS_H
#define REFUGEOPTIONS_H

#include <QWidget>
#include "refuge.h"
#include "mainwindow.h"
#include "mylabel.h"

namespace Ui {
class RefugeOptions;
}

class RefugeOptions : public QWidget
{
    Q_OBJECT

public:
    refuge *selectedRefuge;
    MainWindow *tempMW;
    MyLabel *buildLabel;
    explicit RefugeOptions(QWidget *parent = 0);
    ~RefugeOptions();

private:
    Ui::RefugeOptions *ui;
signals:
    void pressDelete();
private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_horizontalSlider_valueChanged(int value);
    void on_pushButton_2_clicked();
};

#endif // REFUGEOPTIONS_H
