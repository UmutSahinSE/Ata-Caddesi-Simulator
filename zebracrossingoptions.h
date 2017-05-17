#ifndef ZEBRACROSSINGOPTIONS_H
#define ZEBRACROSSINGOPTIONS_H

#include <QWidget>
#include "zebracrossing.h"

namespace Ui {
class ZebraCrossingOptions;
}

class ZebraCrossingOptions : public QWidget
{
    Q_OBJECT

public:
    zebracrossing *selectedZebraCrossing;
    explicit ZebraCrossingOptions(QWidget *parent = 0);
    ~ZebraCrossingOptions();

private:
    Ui::ZebraCrossingOptions *ui;
};

#endif // ZEBRACROSSINGOPTIONS_H
