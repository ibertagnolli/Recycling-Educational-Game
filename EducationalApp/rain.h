#ifndef RAIN_H
#define RAIN_H

#include <QObject>
#include "Box2D/Box2D.h"
#include <QRandomGenerator>

class Rain : public QObject
{
    Q_OBJECT
public:
    explicit Rain(QObject *parent = nullptr);
    //b2World* world;
    b2Body* raindropBody;
    Rain(b2World* world);
signals:

};

#endif // RAIN_H
