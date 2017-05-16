/********************************************************************************
** Form generated from reading UI file 'caroption.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAROPTION_H
#define UI_CAROPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarOption
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *CarOption)
    {
        if (CarOption->objectName().isEmpty())
            CarOption->setObjectName(QStringLiteral("CarOption"));
        CarOption->resize(121, 148);
        gridLayout = new QGridLayout(CarOption);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CarOption);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(CarOption);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 89, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        pushButton = new QPushButton(CarOption);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(CarOption);

        QMetaObject::connectSlotsByName(CarOption);
    } // setupUi

    void retranslateUi(QWidget *CarOption)
    {
        CarOption->setWindowTitle(QApplication::translate("CarOption", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CarOption", "Cars per Minute", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CarOption", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CarOption: public Ui_CarOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAROPTION_H
