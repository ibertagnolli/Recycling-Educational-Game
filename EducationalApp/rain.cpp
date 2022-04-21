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
    int v1 = rand() % 650 + 50;
    int v2 = rand() % 200 - 300;
    myBodyDef.position.Set(v1/100.0, v2/100.0);
    raindropBody = world->CreateBody(&myBodyDef);

    //add circle fixture
    b2CircleShape circleShape;
    circleShape.m_p.Set(0, 0);
    circleShape.m_radius = 0.1;
    b2FixtureDef myFixtureDef;
    myFixtureDef.shape = &circleShape;
    myFixtureDef.density = 1;

    // Add restitution for bounciness
    myFixtureDef.restitution = 0.9f;

    // Override the default friction.
    myFixtureDef.friction = 0.01f;

    raindropBody->CreateFixture(&myFixtureDef);



}
