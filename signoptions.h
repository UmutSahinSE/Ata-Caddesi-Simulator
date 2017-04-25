#ifndef SIGNOPTIONS_H
#define SIGNOPTIONS_H

#include <QWidget>

namespace Ui {
class SignOptions;
}

class SignOptions : public QWidget
{
    Q_OBJECT

public:
    explicit SignOptions(QWidget *parent = 0);
    ~SignOptions();

private:
    Ui::SignOptions *ui;
};

#endif // SIGNOPTIONS_H
