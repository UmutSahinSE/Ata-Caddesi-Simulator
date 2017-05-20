#ifndef SQUAREOPTIONS_H
#define SQUAREOPTIONS_H

#include <QWidget>
#include "mainwindow.h"
#include "square.h"

namespace Ui {
class squareOptions;
}

class squareOptions : public QWidget
{
    Q_OBJECT

public:
    MainWindow *tempMW;
    Square *selectedSquare;
    explicit squareOptions(QWidget *parent = 0);
    ~squareOptions();

private slots:
    void on_pushButton_clicked();

private:
    Ui::squareOptions *ui;
signals:
    void pressDelete();
};

#endif // SQUAREOPTIONS_H
