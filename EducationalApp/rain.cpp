#include "rain.h"

Rain::Rain(QObject *parent): QObject{parent}
{
    raindropBody = NULL;
}

Rain::Rain(b2World* world)
{
    raindropBody = NULL;

    // Define the dynamic body. We set its position and call the body factory.
    b2BodyDef ballBodyDef;
    ballBodyDef.type = b2_dynamicBody;
    // Randomizes the ball's starting position so the balls have variety
    int x = rand() % 540 + 150;
    int y = rand() % 200 - 300;
    ballBodyDef.position.Set(x/100.0, y/100.0);
    raindropBody = world->CreateBody(&ballBodyDef);

    // Define a circle shape for our dynamic body.
    b2CircleShape circleShape;
    circleShape.m_p.Set(0, 0);
    circleShape.m_radius = 0.25;

    // Define the dynamic body fixture.
    b2FixtureDef myFixtureDef;
    myFixtureDef.shape = &circleShape;
    myFixtureDef.density = 1;

    // Add restitution for bounciness
    myFixtureDef.restitution = 0.8f;

    // Override the default friction.
    myFixtureDef.friction = 0.001f;

    // Add the shape to the body.
    raindropBody->CreateFixture(&myFixtureDef);
}
