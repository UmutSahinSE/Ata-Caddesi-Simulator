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


    void AddOneWayRoad();
    void AddTwoWayRoad();
    void AddTwoWayRoadWithRefuge();
    void AddIntersection();

    void FrameItemOnHover();
    void ChooseClickedItem();
    void disconnectMouseEvents();

    void on_actionOne_Way_triggered();

    void on_actionTwo_Ways_triggered();

    void on_ChooseButton_clicked();

    void on_actionTwo_Ways_with_Refuge_triggered();

    void on_actionIntersection_triggered();

private:
    Ui::MainWindow *ui;


};



#endif // MAINWINDOW_H
