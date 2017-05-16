#ifndef INTERSECTION_H
#define INTERSECTION_H

#include <QLabel>
#include <QRect>
#include <QPixmap>


class intersection : public QLabel
{
public:
    intersection();
private:
    QRect *rectLine;
    QPixmap *rectImage;
};

#endif // INTERSECTION_H
