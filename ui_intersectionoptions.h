/********************************************************************************
** Form generated from reading UI file 'intersectionoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERSECTIONOPTIONS_H
#define UI_INTERSECTIONOPTIONS_H

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

class Ui_IntersectionOptions
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *ReplaceButton;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *IntersectionOptions)
    {
        if (IntersectionOptions->objectName().isEmpty())
            IntersectionOptions->setObjectName(QStringLiteral("IntersectionOptions"));
        IntersectionOptions->resize(109, 124);
        verticalLayout = new QVBoxLayout(IntersectionOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_3 = new QPushButton(IntersectionOptions);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        ReplaceButton = new QPushButton(IntersectionOptions);
        ReplaceButton->setObjectName(QStringLiteral("ReplaceButton"));

        verticalLayout->addWidget(ReplaceButton);

        DeleteButton = new QPushButton(IntersectionOptions);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        verticalLayout->addWidget(DeleteButton);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(IntersectionOptions);

        QMetaObject::connectSlotsByName(IntersectionOptions);
    } // setupUi

    void retranslateUi(QWidget *IntersectionOptions)
    {
        IntersectionOptions->setWindowTitle(QApplication::translate("IntersectionOptions", "Form", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("IntersectionOptions", "Rotate", Q_NULLPTR));
        ReplaceButton->setText(QApplication::translate("IntersectionOptions", "Replace", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("IntersectionOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IntersectionOptions: public Ui_IntersectionOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERSECTIONOPTIONS_H
