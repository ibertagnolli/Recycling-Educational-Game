/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#ifndef BALL_H
#define BALL_H

#include <QObject>
#include "Box2D/Box2D.h"
#include <QRandomGenerator>

/**
 * @brief The Ball class - Creates ball objects to place into a box2D physics world.
 */
class Ball : public QObject
{
    Q_OBJECT
public:
    explicit Ball(QObject *parent = nullptr);

    /**
    * Destructor for Ball objects
    */
    ~Ball();

    /**
     * @brief Constructs ball object to be placed into the provided world.
     * @param world - Provided box2D physics world.
     */
    Ball(b2World* world);

    /**
     * @brief Body of ball to be put into world.
     */
    b2Body* ballBody;

signals:

};

#endif // BALL_H
