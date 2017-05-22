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
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *IntersectionOptions)
    {
        if (IntersectionOptions->objectName().isEmpty())
            IntersectionOptions->setObjectName(QStringLiteral("IntersectionOptions"));
        IntersectionOptions->resize(109, 124);
        verticalLayout = new QVBoxLayout(IntersectionOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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
        DeleteButton->setText(QApplication::translate("IntersectionOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IntersectionOptions: public Ui_IntersectionOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERSECTIONOPTIONS_H
