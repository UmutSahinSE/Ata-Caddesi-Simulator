/********************************************************************************
** Form generated from reading UI file 'endoftheroadoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDOFTHEROADOPTIONS_H
#define UI_ENDOFTHEROADOPTIONS_H

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

class Ui_EndOfTheRoadOptions
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EndOfTheRoadOptions)
    {
        if (EndOfTheRoadOptions->objectName().isEmpty())
            EndOfTheRoadOptions->setObjectName(QStringLiteral("EndOfTheRoadOptions"));
        EndOfTheRoadOptions->resize(92, 98);
        verticalLayout = new QVBoxLayout(EndOfTheRoadOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        DeleteButton = new QPushButton(EndOfTheRoadOptions);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        verticalLayout->addWidget(DeleteButton);

        verticalSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(EndOfTheRoadOptions);

        QMetaObject::connectSlotsByName(EndOfTheRoadOptions);
    } // setupUi

    void retranslateUi(QWidget *EndOfTheRoadOptions)
    {
        EndOfTheRoadOptions->setWindowTitle(QApplication::translate("EndOfTheRoadOptions", "Form", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("EndOfTheRoadOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EndOfTheRoadOptions: public Ui_EndOfTheRoadOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDOFTHEROADOPTIONS_H
