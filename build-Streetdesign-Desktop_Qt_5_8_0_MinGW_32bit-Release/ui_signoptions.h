/********************************************************************************
** Form generated from reading UI file 'signoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNOPTIONS_H
#define UI_SIGNOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignOptions
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QLabel *TypeLabel;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SignOptions)
    {
        if (SignOptions->objectName().isEmpty())
            SignOptions->setObjectName(QStringLiteral("SignOptions"));
        SignOptions->resize(134, 192);
        verticalLayout_2 = new QVBoxLayout(SignOptions);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(SignOptions);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(SignOptions);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(SignOptions);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(SignOptions);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 3, 1, 1);

        pushButton_2 = new QPushButton(SignOptions);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 4);

        TypeLabel = new QLabel(SignOptions);
        TypeLabel->setObjectName(QStringLiteral("TypeLabel"));

        gridLayout->addWidget(TypeLabel, 0, 0, 1, 4);


        verticalLayout_2->addLayout(gridLayout);

        DeleteButton = new QPushButton(SignOptions);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        verticalLayout_2->addWidget(DeleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(SignOptions);

        QMetaObject::connectSlotsByName(SignOptions);
    } // setupUi

    void retranslateUi(QWidget *SignOptions)
    {
        SignOptions->setWindowTitle(QApplication::translate("SignOptions", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SignOptions", "30", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SignOptions", "60", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SignOptions", "90", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("SignOptions", "120", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SignOptions", "Stop", Q_NULLPTR));
        TypeLabel->setText(QApplication::translate("SignOptions", "Sign Type:", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("SignOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignOptions: public Ui_SignOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNOPTIONS_H
