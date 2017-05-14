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
    void AddZebraCrossing();
    void AddEndOfTheRoad();
    void AddCarSpawn();
    void AddTrafficLight();
    void AddSign();

    void FrameItemOnHover();
    void ChooseClickedItem();
    void disconnectMouseEvents();

    void on_actionOne_Way_triggered();

    void on_actionTwo_Ways_triggered();

    void on_ChooseButton_clicked();

    void on_actionTwo_Ways_with_Refuge_triggered();

    void on_actionIntersection_triggered();

    void on_actionZebra_Crossings_triggered();

    void on_actionIntersection_2_triggered();

    void on_actionCar_triggered();

    void on_actionTraffic_Light_triggered();

    void on_actionSign_triggered();

private:
    Ui::MainWindow *ui;


};



#endif // MAINWINDOW_H
