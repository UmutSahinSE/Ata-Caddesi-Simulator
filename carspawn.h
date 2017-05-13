#ifndef CARSPAWN_H
#define CARSPAWN_H

#include <QLabel>
#include <QRect>


class carspawn : public QLabel
{
public:
    carspawn();
private:
    QRect *carspawnRect;
    QPixmap *carspawnImage;
};

#endif // CARSPAWN_H
