/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionIntersection;
    QAction *actionZebra_Crossings;
    QAction *actionCar;
    QAction *actionIntersection_2;
    QAction *actionSign;
    QAction *actionOne_Way;
    QAction *actionTwo_Ways;
    QAction *actionTwo_Ways_with_Refuge;
    QAction *actionSquare;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QScrollArea *BuildScreen;
    QWidget *BuildScroll;
    MyLabel *buildLabel;
    QLabel *buildimage;
    QTabWidget *OptionScreen;
    QWidget *Options;
    QPushButton *ChooseButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SimulateButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAdd;
    QMenu *menuRoad;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAnimated(true);
        actionIntersection = new QAction(MainWindow);
        actionIntersection->setObjectName(QStringLiteral("actionIntersection"));
        actionZebra_Crossings = new QAction(MainWindow);
        actionZebra_Crossings->setObjectName(QStringLiteral("actionZebra_Crossings"));
        actionCar = new QAction(MainWindow);
        actionCar->setObjectName(QStringLiteral("actionCar"));
        actionIntersection_2 = new QAction(MainWindow);
        actionIntersection_2->setObjectName(QStringLiteral("actionIntersection_2"));
        actionSign = new QAction(MainWindow);
        actionSign->setObjectName(QStringLiteral("actionSign"));
        actionOne_Way = new QAction(MainWindow);
        actionOne_Way->setObjectName(QStringLiteral("actionOne_Way"));
        actionTwo_Ways = new QAction(MainWindow);
        actionTwo_Ways->setObjectName(QStringLiteral("actionTwo_Ways"));
        actionTwo_Ways_with_Refuge = new QAction(MainWindow);
        actionTwo_Ways_with_Refuge->setObjectName(QStringLiteral("actionTwo_Ways_with_Refuge"));
        actionSquare = new QAction(MainWindow);
        actionSquare->setObjectName(QStringLiteral("actionSquare"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        BuildScreen = new QScrollArea(splitter);
        BuildScreen->setObjectName(QStringLiteral("BuildScreen"));
        BuildScreen->setMaximumSize(QSize(16777215, 16777215));
        BuildScreen->setMouseTracking(true);
        BuildScreen->setFrameShape(QFrame::StyledPanel);
        BuildScreen->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        BuildScreen->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        BuildScreen->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        BuildScreen->setWidgetResizable(false);
        BuildScroll = new QWidget();
        BuildScroll->setObjectName(QStringLiteral("BuildScroll"));
        BuildScroll->setGeometry(QRect(0, 0, 5000, 5000));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BuildScroll->sizePolicy().hasHeightForWidth());
        BuildScroll->setSizePolicy(sizePolicy1);
        BuildScroll->setMouseTracking(true);
        buildLabel = new MyLabel(BuildScroll);
        buildLabel->setObjectName(QStringLiteral("buildLabel"));
        buildLabel->setGeometry(QRect(0, 0, 5000, 5000));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buildLabel->sizePolicy().hasHeightForWidth());
        buildLabel->setSizePolicy(sizePolicy2);
        buildLabel->setMaximumSize(QSize(16777215, 16777215));
        buildLabel->setMouseTracking(true);
        buildimage = new QLabel(BuildScroll);
        buildimage->setObjectName(QStringLiteral("buildimage"));
        buildimage->setGeometry(QRect(0, 0, 5000, 5000));
        buildimage->setMouseTracking(true);
        buildimage->setPixmap(QPixmap(QString::fromUtf8(":/pictures/Pointy3.png")));
        buildimage->setScaledContents(true);
        BuildScreen->setWidget(BuildScroll);
        buildimage->raise();
        buildLabel->raise();
        splitter->addWidget(BuildScreen);
        OptionScreen = new QTabWidget(splitter);
        OptionScreen->setObjectName(QStringLiteral("OptionScreen"));
        sizePolicy1.setHeightForWidth(OptionScreen->sizePolicy().hasHeightForWidth());
        OptionScreen->setSizePolicy(sizePolicy1);
        OptionScreen->setUsesScrollButtons(true);
        OptionScreen->setTabBarAutoHide(false);
        Options = new QWidget();
        Options->setObjectName(QStringLiteral("Options"));
        OptionScreen->addTab(Options, QString());
        splitter->addWidget(OptionScreen);

        gridLayout->addWidget(splitter, 0, 0, 1, 4);

        ChooseButton = new QPushButton(centralWidget);
        ChooseButton->setObjectName(QStringLiteral("ChooseButton"));

        gridLayout->addWidget(ChooseButton, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(146, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(145, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        SimulateButton = new QPushButton(centralWidget);
        SimulateButton->setObjectName(QStringLiteral("SimulateButton"));

        gridLayout->addWidget(SimulateButton, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAdd = new QMenu(menuBar);
        menuAdd->setObjectName(QStringLiteral("menuAdd"));
        menuRoad = new QMenu(menuAdd);
        menuRoad->setObjectName(QStringLiteral("menuRoad"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAdd->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuAdd->addAction(menuRoad->menuAction());
        menuAdd->addAction(actionIntersection);
        menuAdd->addAction(actionZebra_Crossings);
        menuAdd->addAction(actionCar);
        menuAdd->addAction(actionIntersection_2);
        menuAdd->addAction(actionSign);
        menuRoad->addAction(actionOne_Way);
        menuRoad->addAction(actionTwo_Ways);
        menuRoad->addAction(actionTwo_Ways_with_Refuge);
        menuRoad->addAction(actionSquare);

        retranslateUi(MainWindow);

        OptionScreen->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionIntersection->setText(QApplication::translate("MainWindow", "Intersection", Q_NULLPTR));
        actionZebra_Crossings->setText(QApplication::translate("MainWindow", "Zebra Crossings", Q_NULLPTR));
        actionCar->setText(QApplication::translate("MainWindow", "Car Spawn", Q_NULLPTR));
        actionIntersection_2->setText(QApplication::translate("MainWindow", "End of the Road", Q_NULLPTR));
        actionSign->setText(QApplication::translate("MainWindow", "Sign", Q_NULLPTR));
        actionOne_Way->setText(QApplication::translate("MainWindow", "One Way", Q_NULLPTR));
        actionTwo_Ways->setText(QApplication::translate("MainWindow", "Two Ways", Q_NULLPTR));
        actionTwo_Ways_with_Refuge->setText(QApplication::translate("MainWindow", "Two Ways with Refuge", Q_NULLPTR));
        actionSquare->setText(QApplication::translate("MainWindow", "Square", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", Q_NULLPTR));
        buildimage->setText(QString());
        OptionScreen->setTabText(OptionScreen->indexOf(Options), QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        ChooseButton->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        SimulateButton->setText(QApplication::translate("MainWindow", "Simulate", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuAdd->setTitle(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        menuRoad->setTitle(QApplication::translate("MainWindow", "Road", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
