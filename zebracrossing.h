#ifndef ZEBRACROSSING_H
#define ZEBRACROSSING_H

#include <QLabel>
#include <QRect>
#include <QPixmap>


class zebracrossing : public QLabel
{
public:
    zebracrossing();
public:
    QRect *zebraRect;
    QPixmap *zebraImage;
};

#endif // ZEBRACROSSING_H
