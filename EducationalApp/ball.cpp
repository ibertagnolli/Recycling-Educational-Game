#include "ball.h"

Ball::Ball(QObject *parent): QObject{parent}
{
    ballBody = NULL;
}

Ball::~Ball() {}

Ball::Ball(b2World* world)
{
    ballBody = NULL;

    // Define the dynamic body. We set its position and call the body factory.
    b2BodyDef ballBodyDef;
    ballBodyDef.type = b2_dynamicBody;
    // Randomizes the ball's starting position so the balls have variety
    int x = rand() % 480 + 60;
    int y = rand() % 200 - 300;
    ballBodyDef.position.Set(x/100.0, y/100.0);
    ballBody = world->CreateBody(&ballBodyDef);

    // Define a circle shape for our dynamic body.
    b2CircleShape circleShape;
    circleShape.m_p.Set(0, 0);
    circleShape.m_radius = 0.25;
    //circleShape.m_radius = 0.25;

    // Define the dynamic body fixture.
    b2FixtureDef ballFixtureDef;
    ballFixtureDef.shape = &circleShape;
    ballFixtureDef.density = 1;

    // Add restitution for bounciness
    ballFixtureDef.restitution = 0.8f;

    // Override the default friction.
    ballFixtureDef.friction = 0.001f;

    // Add the shape to the body.
    ballBody->CreateFixture(&ballFixtureDef);
}
