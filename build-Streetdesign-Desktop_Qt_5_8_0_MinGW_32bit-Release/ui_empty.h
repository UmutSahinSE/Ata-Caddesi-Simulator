/********************************************************************************
** Form generated from reading UI file 'empty.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPTY_H
#define UI_EMPTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Empty
{
public:

    void setupUi(QWidget *Empty)
    {
        if (Empty->objectName().isEmpty())
            Empty->setObjectName(QStringLiteral("Empty"));
        Empty->resize(174, 337);

        retranslateUi(Empty);

        QMetaObject::connectSlotsByName(Empty);
    } // setupUi

    void retranslateUi(QWidget *Empty)
    {
        Empty->setWindowTitle(QApplication::translate("Empty", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Empty: public Ui_Empty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPTY_H
