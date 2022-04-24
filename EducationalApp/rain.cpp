#include "rain.h"

Rain::Rain(QObject *parent): QObject{parent}
{
    raindropBody = NULL;
}

Rain::Rain(b2World* world)
{
    raindropBody = NULL;

    //set up dynamic body, store in class variable
    b2BodyDef myBodyDef;
    myBodyDef.type = b2_dynamicBody;
    int x = rand() % 540 + 150;
    int y = rand() % 200 - 300;
    myBodyDef.position.Set(x/100.0, y/100.0);
    raindropBody = world->CreateBody(&myBodyDef);

    //add circle fixture
    b2CircleShape circleShape;
    circleShape.m_p.Set(0, 0);
    circleShape.m_radius = 0.25;
    b2FixtureDef myFixtureDef;
    myFixtureDef.shape = &circleShape;
    myFixtureDef.density = 1;

    // Add restitution for bounciness
    myFixtureDef.restitution = 0.8f;

    // Override the default friction.
    myFixtureDef.friction = 0.001f;

    raindropBody->CreateFixture(&myFixtureDef);



}
