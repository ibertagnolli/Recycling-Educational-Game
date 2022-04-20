#ifndef RAIN_H
#define RAIN_H

#include <QObject>

class Rain : public QObject
{
    Q_OBJECT
public:
    explicit Rain(QObject *parent = nullptr);
    int xPos;
    int yPos;
signals:

};

#endif // RAIN_H
