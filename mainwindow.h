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
signals:
    void Simulate();
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
    void AddSquare();
    void ReplaceRoad();
    void ReplaceRefuge();
    void AddRefuge();
    void AppointRoad();

    void ChooseClickedItem();
    void disconnectMouseEvents();
    void ResetOptionScreen();

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

    void on_actionSquare_triggered();

    void on_actionNew_triggered();

    void on_actionRefuge_triggered();

    void on_SimulateButton_clicked();

private:

    Ui::MainWindow *ui;


};



#endif // MAINWINDOW_H
