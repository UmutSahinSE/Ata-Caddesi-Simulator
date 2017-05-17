#ifndef CARSPAWN_H
#define CARSPAWN_H

#include <QLabel>
#include <QRect>


class carspawn : public QLabel
{
public:
    carspawn();
    void rotate();
    bool isVerticle;
private:
    QPixmap *carspawnImage;
};

#endif // CARSPAWN_H
