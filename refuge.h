#ifndef REFUGE_H
#define REFUGE_H

#include <QLabel>


class refuge : public QLabel
{
public:
    refuge();
    QLine *refugeLine;
private:

    QPixmap *refugeImage;
};

#endif // REFUGE_H
