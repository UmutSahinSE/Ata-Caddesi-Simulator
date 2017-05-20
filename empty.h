#ifndef EMPTY_H
#define EMPTY_H

#include <QWidget>

namespace Ui {
class Empty;
}

class Empty : public QWidget
{
    Q_OBJECT

public:
    explicit Empty(QWidget *parent = 0);
    ~Empty();

private:
    Ui::Empty *ui;
};

#endif // EMPTY_H
