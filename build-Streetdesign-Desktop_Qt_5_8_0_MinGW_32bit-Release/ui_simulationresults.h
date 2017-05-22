/********************************************************************************
** Form generated from reading UI file 'simulationresults.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONRESULTS_H
#define UI_SIMULATIONRESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimulationResults
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTableView *tableView;
    QTableView *tableView_2;

    void setupUi(QWidget *SimulationResults)
    {
        if (SimulationResults->objectName().isEmpty())
            SimulationResults->setObjectName(QStringLiteral("SimulationResults"));
        SimulationResults->resize(400, 300);
        verticalLayout = new QVBoxLayout(SimulationResults);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(SimulationResults);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        splitter->addWidget(tableView);
        tableView_2 = new QTableView(splitter);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        splitter->addWidget(tableView_2);

        verticalLayout->addWidget(splitter);


        retranslateUi(SimulationResults);

        QMetaObject::connectSlotsByName(SimulationResults);
    } // setupUi

    void retranslateUi(QWidget *SimulationResults)
    {
        SimulationResults->setWindowTitle(QApplication::translate("SimulationResults", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimulationResults: public Ui_SimulationResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONRESULTS_H
