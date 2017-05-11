#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow ProjectMainWindow;
    ProjectMainWindow.show();

    return a.exec();
}
