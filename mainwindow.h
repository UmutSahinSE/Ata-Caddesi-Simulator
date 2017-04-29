#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <onewayroad.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:

    void ChooseAddPosition();
    void AddChosen();
    void on_actionOne_Way_triggered();

private:
    Ui::MainWindow *ui;
    OneWayRoadClass *roads= new OneWayRoadClass[50];

};



#endif // MAINWINDOW_H
