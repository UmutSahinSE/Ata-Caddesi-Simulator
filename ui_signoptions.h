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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignOptions
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *TypeLabel;
    QHBoxLayout *horizontalLayout;
    QRadioButton *SpeedLimitRadio;
    QLineEdit *lineEdit;
    QRadioButton *StopRadio;
    QPushButton *ReplaceButton;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SignOptions)
    {
        if (SignOptions->objectName().isEmpty())
            SignOptions->setObjectName(QStringLiteral("SignOptions"));
        SignOptions->resize(134, 192);
        verticalLayout_2 = new QVBoxLayout(SignOptions);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TypeLabel = new QLabel(SignOptions);
        TypeLabel->setObjectName(QStringLiteral("TypeLabel"));

        verticalLayout->addWidget(TypeLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        SpeedLimitRadio = new QRadioButton(SignOptions);
        SpeedLimitRadio->setObjectName(QStringLiteral("SpeedLimitRadio"));

        horizontalLayout->addWidget(SpeedLimitRadio);

        lineEdit = new QLineEdit(SignOptions);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        StopRadio = new QRadioButton(SignOptions);
        StopRadio->setObjectName(QStringLiteral("StopRadio"));

        verticalLayout->addWidget(StopRadio);


        verticalLayout_2->addLayout(verticalLayout);

        ReplaceButton = new QPushButton(SignOptions);
        ReplaceButton->setObjectName(QStringLiteral("ReplaceButton"));

        verticalLayout_2->addWidget(ReplaceButton);

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
        TypeLabel->setText(QApplication::translate("SignOptions", "Sign Type:", Q_NULLPTR));
        SpeedLimitRadio->setText(QApplication::translate("SignOptions", "Speed Limit", Q_NULLPTR));
        StopRadio->setText(QApplication::translate("SignOptions", "Stop", Q_NULLPTR));
        ReplaceButton->setText(QApplication::translate("SignOptions", "Replace", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("SignOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignOptions: public Ui_SignOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNOPTIONS_H
