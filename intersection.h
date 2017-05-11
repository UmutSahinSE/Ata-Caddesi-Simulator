#ifndef INTERSECTION_H
#define INTERSECTION_H

#include <QLabel>
#include <QRect>


class intersection : public QLabel
{
public:
    intersection();
private:
    QRect *rectLine;
    QPixmap *rectImage;
};

#endif // INTERSECTION_H
