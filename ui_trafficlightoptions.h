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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QLineEdit *RedDurationEdit;
    QHBoxLayout *GreenLayout;
    QLabel *GreenLabel;
    QLineEdit *GreenDurationEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *StartFromLabel;
    QLineEdit *StartFromEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *ReplaceButton;
    QPushButton *DeleteButton;
    QPushButton *AppointButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TrafficLightOptions)
    {
        if (TrafficLightOptions->objectName().isEmpty())
            TrafficLightOptions->setObjectName(QStringLiteral("TrafficLightOptions"));
        TrafficLightOptions->resize(133, 253);
        verticalLayout = new QVBoxLayout(TrafficLightOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        RedLayout = new QHBoxLayout();
        RedLayout->setObjectName(QStringLiteral("RedLayout"));
        RedLabel = new QLabel(TrafficLightOptions);
        RedLabel->setObjectName(QStringLiteral("RedLabel"));

        RedLayout->addWidget(RedLabel);

        RedDurationEdit = new QLineEdit(TrafficLightOptions);
        RedDurationEdit->setObjectName(QStringLiteral("RedDurationEdit"));

        RedLayout->addWidget(RedDurationEdit);


        verticalLayout->addLayout(RedLayout);

        GreenLayout = new QHBoxLayout();
        GreenLayout->setObjectName(QStringLiteral("GreenLayout"));
        GreenLabel = new QLabel(TrafficLightOptions);
        GreenLabel->setObjectName(QStringLiteral("GreenLabel"));

        GreenLayout->addWidget(GreenLabel);

        GreenDurationEdit = new QLineEdit(TrafficLightOptions);
        GreenDurationEdit->setObjectName(QStringLiteral("GreenDurationEdit"));

        GreenLayout->addWidget(GreenDurationEdit);


        verticalLayout->addLayout(GreenLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        StartFromLabel = new QLabel(TrafficLightOptions);
        StartFromLabel->setObjectName(QStringLiteral("StartFromLabel"));

        horizontalLayout_4->addWidget(StartFromLabel);

        StartFromEdit = new QLineEdit(TrafficLightOptions);
        StartFromEdit->setObjectName(QStringLiteral("StartFromEdit"));

        horizontalLayout_4->addWidget(StartFromEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        label = new QLabel(TrafficLightOptions);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_2 = new QRadioButton(TrafficLightOptions);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(TrafficLightOptions);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);


        verticalLayout->addLayout(horizontalLayout);

        ReplaceButton = new QPushButton(TrafficLightOptions);
        ReplaceButton->setObjectName(QStringLiteral("ReplaceButton"));

        verticalLayout->addWidget(ReplaceButton);

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
        GreenLabel->setText(QApplication::translate("TrafficLightOptions", "Green Duration", Q_NULLPTR));
        StartFromLabel->setText(QApplication::translate("TrafficLightOptions", "Start From Second", Q_NULLPTR));
        label->setText(QApplication::translate("TrafficLightOptions", "Start From Color:", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("TrafficLightOptions", "Red", Q_NULLPTR));
        radioButton->setText(QApplication::translate("TrafficLightOptions", "Green", Q_NULLPTR));
        ReplaceButton->setText(QApplication::translate("TrafficLightOptions", "Replace", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("TrafficLightOptions", "Delete", Q_NULLPTR));
        AppointButton->setText(QApplication::translate("TrafficLightOptions", "Appoint to Road", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrafficLightOptions: public Ui_TrafficLightOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAFFICLIGHTOPTIONS_H
