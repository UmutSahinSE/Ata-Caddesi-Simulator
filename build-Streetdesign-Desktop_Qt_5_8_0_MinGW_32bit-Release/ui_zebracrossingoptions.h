/********************************************************************************
** Form generated from reading UI file 'zebracrossingoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZEBRACROSSINGOPTIONS_H
#define UI_ZEBRACROSSINGOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZebraCrossingOptions
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QLabel *Pedestrianlabel;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ZebraCrossingOptions)
    {
        if (ZebraCrossingOptions->objectName().isEmpty())
            ZebraCrossingOptions->setObjectName(QStringLiteral("ZebraCrossingOptions"));
        ZebraCrossingOptions->resize(139, 138);
        gridLayout = new QGridLayout(ZebraCrossingOptions);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSlider = new QSlider(ZebraCrossingOptions);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        Pedestrianlabel = new QLabel(ZebraCrossingOptions);
        Pedestrianlabel->setObjectName(QStringLiteral("Pedestrianlabel"));

        horizontalLayout->addWidget(Pedestrianlabel);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        DeleteButton = new QPushButton(ZebraCrossingOptions);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        gridLayout->addWidget(DeleteButton, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(ZebraCrossingOptions);

        QMetaObject::connectSlotsByName(ZebraCrossingOptions);
    } // setupUi

    void retranslateUi(QWidget *ZebraCrossingOptions)
    {
        ZebraCrossingOptions->setWindowTitle(QApplication::translate("ZebraCrossingOptions", "Form", Q_NULLPTR));
        Pedestrianlabel->setText(QApplication::translate("ZebraCrossingOptions", "30", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("ZebraCrossingOptions", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZebraCrossingOptions: public Ui_ZebraCrossingOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZEBRACROSSINGOPTIONS_H
