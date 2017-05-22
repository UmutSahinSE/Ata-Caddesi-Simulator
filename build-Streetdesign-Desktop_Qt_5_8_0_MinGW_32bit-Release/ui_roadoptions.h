/********************************************************************************
** Form generated from reading UI file 'roadoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROADOPTIONS_H
#define UI_ROADOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Roadoptions
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *FlowNorth;
    QPushButton *FlowWest;
    QPushButton *FlowSouth;
    QPushButton *FlowEast;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *LengthLabel;
    QPushButton *ReplaceButton;
    QPushButton *DeleteButton;

    void setupUi(QWidget *Roadoptions)
    {
        if (Roadoptions->objectName().isEmpty())
            Roadoptions->setObjectName(QStringLiteral("Roadoptions"));
        Roadoptions->resize(178, 150);
        verticalLayout = new QVBoxLayout(Roadoptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        FlowNorth = new QPushButton(Roadoptions);
        FlowNorth->setObjectName(QStringLiteral("FlowNorth"));

        gridLayout->addWidget(FlowNorth, 0, 0, 1, 1);

        FlowWest = new QPushButton(Roadoptions);
        FlowWest->setObjectName(QStringLiteral("FlowWest"));

        gridLayout->addWidget(FlowWest, 1, 0, 1, 1);

        FlowSouth = new QPushButton(Roadoptions);
        FlowSouth->setObjectName(QStringLiteral("FlowSouth"));

        gridLayout->addWidget(FlowSouth, 0, 1, 1, 1);

        FlowEast = new QPushButton(Roadoptions);
        FlowEast->setObjectName(QStringLiteral("FlowEast"));

        gridLayout->addWidget(FlowEast, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Roadoptions);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(Roadoptions);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        LengthLabel = new QLabel(Roadoptions);
        LengthLabel->setObjectName(QStringLiteral("LengthLabel"));

        horizontalLayout->addWidget(LengthLabel);


        verticalLayout->addLayout(horizontalLayout);

        ReplaceButton = new QPushButton(Roadoptions);
        ReplaceButton->setObjectName(QStringLiteral("ReplaceButton"));

        verticalLayout->addWidget(ReplaceButton);

        DeleteButton = new QPushButton(Roadoptions);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        verticalLayout->addWidget(DeleteButton);


        retranslateUi(Roadoptions);

        QMetaObject::connectSlotsByName(Roadoptions);
    } // setupUi

    void retranslateUi(QWidget *Roadoptions)
    {
        Roadoptions->setWindowTitle(QApplication::translate("Roadoptions", "Form", Q_NULLPTR));
        FlowNorth->setText(QApplication::translate("Roadoptions", "Flow North", Q_NULLPTR));
        FlowWest->setText(QApplication::translate("Roadoptions", "Flow West", Q_NULLPTR));
        FlowSouth->setText(QApplication::translate("Roadoptions", "Flow South", Q_NULLPTR));
        FlowEast->setText(QApplication::translate("Roadoptions", "Flow East", Q_NULLPTR));
        label->setText(QApplication::translate("Roadoptions", "Length", Q_NULLPTR));
        LengthLabel->setText(QApplication::translate("Roadoptions", "200", Q_NULLPTR));
        ReplaceButton->setText(QApplication::translate("Roadoptions", "Replace", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("Roadoptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Roadoptions: public Ui_Roadoptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROADOPTIONS_H
