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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Roadoptions
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *CurveButton;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *ChangeFlowButton;
    QPushButton *ExtendCutButton;
    QPushButton *ReplaceButton;
    QPushButton *DeleteButton;

    void setupUi(QWidget *Roadoptions)
    {
        if (Roadoptions->objectName().isEmpty())
            Roadoptions->setObjectName(QStringLiteral("Roadoptions"));
        Roadoptions->resize(144, 150);
        verticalLayout = new QVBoxLayout(Roadoptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        CurveButton = new QPushButton(Roadoptions);
        CurveButton->setObjectName(QStringLiteral("CurveButton"));

        verticalLayout->addWidget(CurveButton);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButton = new QRadioButton(Roadoptions);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(Roadoptions);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 2, 0, 1, 1);

        radioButton_3 = new QRadioButton(Roadoptions);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 0, 1, 1, 1);

        radioButton_4 = new QRadioButton(Roadoptions);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        ChangeFlowButton = new QPushButton(Roadoptions);
        ChangeFlowButton->setObjectName(QStringLiteral("ChangeFlowButton"));

        verticalLayout->addWidget(ChangeFlowButton);

        ExtendCutButton = new QPushButton(Roadoptions);
        ExtendCutButton->setObjectName(QStringLiteral("ExtendCutButton"));

        verticalLayout->addWidget(ExtendCutButton);

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
        CurveButton->setText(QApplication::translate("Roadoptions", "Curve", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Roadoptions", "North", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Roadoptions", "West", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Roadoptions", "South", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("Roadoptions", "East", Q_NULLPTR));
        ChangeFlowButton->setText(QApplication::translate("Roadoptions", "Change Color", Q_NULLPTR));
        ExtendCutButton->setText(QApplication::translate("Roadoptions", "Extend/Shorten", Q_NULLPTR));
        ReplaceButton->setText(QApplication::translate("Roadoptions", "Replace", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("Roadoptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Roadoptions: public Ui_Roadoptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROADOPTIONS_H
