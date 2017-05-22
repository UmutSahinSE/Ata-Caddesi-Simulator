/********************************************************************************
** Form generated from reading UI file 'refugeoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFUGEOPTIONS_H
#define UI_REFUGEOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RefugeOptions
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *LengthLabel;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *RefugeOptions)
    {
        if (RefugeOptions->objectName().isEmpty())
            RefugeOptions->setObjectName(QStringLiteral("RefugeOptions"));
        RefugeOptions->resize(177, 225);
        verticalLayout = new QVBoxLayout(RefugeOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(RefugeOptions);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(RefugeOptions);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(RefugeOptions);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        LengthLabel = new QLabel(RefugeOptions);
        LengthLabel->setObjectName(QStringLiteral("LengthLabel"));

        horizontalLayout->addWidget(LengthLabel);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_2 = new QPushButton(RefugeOptions);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(RefugeOptions);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(RefugeOptions);

        QMetaObject::connectSlotsByName(RefugeOptions);
    } // setupUi

    void retranslateUi(QWidget *RefugeOptions)
    {
        RefugeOptions->setWindowTitle(QApplication::translate("RefugeOptions", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RefugeOptions", "Rotate", Q_NULLPTR));
        label->setText(QApplication::translate("RefugeOptions", "Extend/Cut", Q_NULLPTR));
        LengthLabel->setText(QApplication::translate("RefugeOptions", "200", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("RefugeOptions", "Replace", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("RefugeOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RefugeOptions: public Ui_RefugeOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFUGEOPTIONS_H
