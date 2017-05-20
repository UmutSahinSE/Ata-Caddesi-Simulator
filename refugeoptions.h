#ifndef REFUGEOPTIONS_H
#define REFUGEOPTIONS_H

#include <QWidget>
#include "refuge.h"

namespace Ui {
class RefugeOptions;
}

class RefugeOptions : public QWidget
{
    Q_OBJECT

public:
    refuge *selectedRefuge;
    explicit RefugeOptions(QWidget *parent = 0);
    ~RefugeOptions();

private:
    Ui::RefugeOptions *ui;
signals:
    void pressDelete();
private slots:
    void on_pushButton_3_clicked();
};

#endif // REFUGEOPTIONS_H
