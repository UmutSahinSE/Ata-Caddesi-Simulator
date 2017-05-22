/********************************************************************************
** Form generated from reading UI file 'trafficlightoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAFFICLIGHTOPTIONS_H
#define UI_TRAFFICLIGHTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrafficLightOptions
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *RedLayout;
    QLabel *RedLabel;
    QSlider *RedSlider;
    QLabel *RedNum;
    QHBoxLayout *GreenLayout;
    QLabel *GreenLabel;
    QSlider *GreenSlider;
    QLabel *GreenNum;
    QHBoxLayout *horizontalLayout_4;
    QLabel *StartFromLabel;
    QSlider *StartSlider;
    QLabel *StartNum;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *DeleteButton;
    QPushButton *AppointButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TrafficLightOptions)
    {
        if (TrafficLightOptions->objectName().isEmpty())
            TrafficLightOptions->setObjectName(QStringLiteral("TrafficLightOptions"));
        TrafficLightOptions->resize(178, 253);
        verticalLayout = new QVBoxLayout(TrafficLightOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        RedLayout = new QHBoxLayout();
        RedLayout->setObjectName(QStringLiteral("RedLayout"));
        RedLabel = new QLabel(TrafficLightOptions);
        RedLabel->setObjectName(QStringLiteral("RedLabel"));

        RedLayout->addWidget(RedLabel);

        RedSlider = new QSlider(TrafficLightOptions);
        RedSlider->setObjectName(QStringLiteral("RedSlider"));
        RedSlider->setOrientation(Qt::Horizontal);

        RedLayout->addWidget(RedSlider);

        RedNum = new QLabel(TrafficLightOptions);
        RedNum->setObjectName(QStringLiteral("RedNum"));

        RedLayout->addWidget(RedNum);


        verticalLayout->addLayout(RedLayout);

        GreenLayout = new QHBoxLayout();
        GreenLayout->setObjectName(QStringLiteral("GreenLayout"));
        GreenLabel = new QLabel(TrafficLightOptions);
        GreenLabel->setObjectName(QStringLiteral("GreenLabel"));

        GreenLayout->addWidget(GreenLabel);

        GreenSlider = new QSlider(TrafficLightOptions);
        GreenSlider->setObjectName(QStringLiteral("GreenSlider"));
        GreenSlider->setOrientation(Qt::Horizontal);

        GreenLayout->addWidget(GreenSlider);

        GreenNum = new QLabel(TrafficLightOptions);
        GreenNum->setObjectName(QStringLiteral("GreenNum"));

        GreenLayout->addWidget(GreenNum);


        verticalLayout->addLayout(GreenLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        StartFromLabel = new QLabel(TrafficLightOptions);
        StartFromLabel->setObjectName(QStringLiteral("StartFromLabel"));

        horizontalLayout_4->addWidget(StartFromLabel);

        StartSlider = new QSlider(TrafficLightOptions);
        StartSlider->setObjectName(QStringLiteral("StartSlider"));
        StartSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(StartSlider);

        StartNum = new QLabel(TrafficLightOptions);
        StartNum->setObjectName(QStringLiteral("StartNum"));

        horizontalLayout_4->addWidget(StartNum);


        verticalLayout->addLayout(horizontalLayout_4);

        label = new QLabel(TrafficLightOptions);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(TrafficLightOptions);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(TrafficLightOptions);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        DeleteButton = new QPushButton(TrafficLightOptions);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        verticalLayout->addWidget(DeleteButton);

        AppointButton = new QPushButton(TrafficLightOptions);
        AppointButton->setObjectName(QStringLiteral("AppointButton"));

        verticalLayout->addWidget(AppointButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TrafficLightOptions);

        QMetaObject::connectSlotsByName(TrafficLightOptions);
    } // setupUi

    void retranslateUi(QWidget *TrafficLightOptions)
    {
        TrafficLightOptions->setWindowTitle(QApplication::translate("TrafficLightOptions", "Form", Q_NULLPTR));
        RedLabel->setText(QApplication::translate("TrafficLightOptions", "Red Duration", Q_NULLPTR));
        RedNum->setText(QApplication::translate("TrafficLightOptions", "60", Q_NULLPTR));
        GreenLabel->setText(QApplication::translate("TrafficLightOptions", "Green Duration", Q_NULLPTR));
        GreenNum->setText(QApplication::translate("TrafficLightOptions", "60", Q_NULLPTR));
        StartFromLabel->setText(QApplication::translate("TrafficLightOptions", "Start From Second", Q_NULLPTR));
        StartNum->setText(QApplication::translate("TrafficLightOptions", "0", Q_NULLPTR));
        label->setText(QApplication::translate("TrafficLightOptions", "Start From Color:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TrafficLightOptions", "Red", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TrafficLightOptions", "Green", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("TrafficLightOptions", "Delete", Q_NULLPTR));
        AppointButton->setText(QApplication::translate("TrafficLightOptions", "Appoint to Road", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrafficLightOptions: public Ui_TrafficLightOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAFFICLIGHTOPTIONS_H
