#ifndef SIGNOPTIONS_H
#define SIGNOPTIONS_H

#include <QWidget>
#include "sign.h"
#include "mainwindow.h"

namespace Ui {
class SignOptions;
}

class SignOptions : public QWidget
{
    Q_OBJECT

public:
    sign *selectedSign;
    MainWindow *tempMW;
    explicit SignOptions(QWidget *parent = 0);
    ~SignOptions();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::SignOptions *ui;
signals:
    void pressDelete();


};

#endif // SIGNOPTIONS_H
