#ifndef REFUGE_H
#define REFUGE_H

#include <QLabel>


class refuge : public QLabel
{
public:
    refuge();
private:
    QLine *refugeLine;
    QPixmap *refugeImage;
};

#endif // REFUGE_H
