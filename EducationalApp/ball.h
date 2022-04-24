#ifndef BALL_H
#define BALL_H

#include <QObject>
#include "Box2D/Box2D.h"
#include <QRandomGenerator>

class Ball : public QObject
{
    Q_OBJECT
public:
    explicit Ball(QObject *parent = nullptr);
    b2Body* ballBody;
    Ball(b2World* world);

signals:

};

#endif // BALL_H
