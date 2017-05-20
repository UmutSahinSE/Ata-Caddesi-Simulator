#ifndef INTERSECTIONOPTIONS_H
#define INTERSECTIONOPTIONS_H

#include <QWidget>
#include "intersection.h"

namespace Ui {
class IntersectionOptions;
}

class IntersectionOptions : public QWidget
{
    Q_OBJECT

public:
    intersection *selectedIntersection;
    explicit IntersectionOptions(QWidget *parent = 0);
    ~IntersectionOptions();

private slots:
    void on_DeleteButton_clicked();

private:
    Ui::IntersectionOptions *ui;
signals:
    void pressDelete();
};

#endif // INTERSECTIONOPTIONS_H
