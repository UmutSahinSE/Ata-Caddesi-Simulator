#ifndef ZEBRACROSSING_H
#define ZEBRACROSSING_H

#include <QLabel>
#include <QPixmap>


class zebracrossing : public QLabel
{
public:
    zebracrossing();
    void rotate();
    bool isVerticle;
    QPixmap *zebraImage;
    int PedestrianPerMinute;
};

#endif // ZEBRACROSSING_H
