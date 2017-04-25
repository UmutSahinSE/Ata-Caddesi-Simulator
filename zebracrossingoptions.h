#ifndef ZEBRACROSSINGOPTIONS_H
#define ZEBRACROSSINGOPTIONS_H

#include <QWidget>

namespace Ui {
class ZebraCrossingOptions;
}

class ZebraCrossingOptions : public QWidget
{
    Q_OBJECT

public:
    explicit ZebraCrossingOptions(QWidget *parent = 0);
    ~ZebraCrossingOptions();

private:
    Ui::ZebraCrossingOptions *ui;
};

#endif // ZEBRACROSSINGOPTIONS_H
