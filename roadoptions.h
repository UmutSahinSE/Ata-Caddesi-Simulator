#ifndef ROADOPTIONS_H
#define ROADOPTIONS_H

#include <QWidget>

namespace Ui {
class Roadoptions;
}

class Roadoptions : public QWidget
{
    Q_OBJECT

public:
    explicit Roadoptions(QWidget *parent = 0);
    ~Roadoptions();

private:
    Ui::Roadoptions *ui;
};

#endif // ROADOPTIONS_H
