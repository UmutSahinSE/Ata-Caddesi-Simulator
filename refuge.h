#ifndef REFUGE_H
#define REFUGE_H

#include <QLabel>


class refuge : public QLabel
{
public:
    refuge();
    bool isVerticle;
    int length;
private:

    QPixmap *refugeImage;
};

#endif // REFUGE_H
