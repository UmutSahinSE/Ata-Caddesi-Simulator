#ifndef ENDOFTHEROADOPTIONS_H
#define ENDOFTHEROADOPTIONS_H

#include <QWidget>
#include "endoftheroad.h"


namespace Ui {
class EndOfTheRoadOptions;
}

class EndOfTheRoadOptions : public QWidget
{
    Q_OBJECT

public:
    endoftheroad *selectedEndOfTheRoad;
    explicit EndOfTheRoadOptions(QWidget *parent = 0);
    ~EndOfTheRoadOptions();

private slots:
    void on_DeleteButton_clicked();

private:
    Ui::EndOfTheRoadOptions *ui;
signals:
    void pressDelete();
};

#endif // ENDOFTHEROADOPTIONS_H
