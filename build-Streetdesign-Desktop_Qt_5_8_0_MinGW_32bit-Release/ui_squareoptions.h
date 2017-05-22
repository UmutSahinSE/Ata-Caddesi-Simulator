/********************************************************************************
** Form generated from reading UI file 'squareoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQUAREOPTIONS_H
#define UI_SQUAREOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_squareOptions
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *squareOptions)
    {
        if (squareOptions->objectName().isEmpty())
            squareOptions->setObjectName(QStringLiteral("squareOptions"));
        squareOptions->resize(118, 129);
        verticalLayout = new QVBoxLayout(squareOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(squareOptions);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(squareOptions);

        QMetaObject::connectSlotsByName(squareOptions);
    } // setupUi

    void retranslateUi(QWidget *squareOptions)
    {
        squareOptions->setWindowTitle(QApplication::translate("squareOptions", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("squareOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class squareOptions: public Ui_squareOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQUAREOPTIONS_H
