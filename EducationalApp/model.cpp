/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#include "model.h"
#include "bins.h"
#include "trashbins.h"
#include "compostbin.h"
#include "specialbins.h"
#include "recyclebins.h"
#include "items.h"
#include "trashitems.h"
#include "compostitems.h"
#include "recycleitems.h"
#include <vector>
#include <iostream>
#include <QPointF>

Model::Model(QObject *parent) : QObject{parent} , world(b2Vec2 (0.0f, 10.0f))
{
    simulationDuration = 5000;
    setUpItems();
    cans.push_back(new RecycleBins);
    cans.push_back(new TrashBins);
    cans.push_back(new CompostBin);
    cans.push_back(new SpecialBins);
}

Model::~Model(){
//    for(auto bin : cans)
//        delete bin;
//    for(auto item : items)
//        delete item;
}

//GENERAL METHODS
void Model::updateScreenIndex(int index)
{
    // When index == 3, gameScreen is displayed. Increment the level shown on gameScreen.
    if (index == 3) {
        currentLevel++;
    }
    if (currentLevel == 1) {
        updateQueue(1);
    } else if (currentLevel == 2) {
        //updateQueue(2);
    } else if (currentLevel == 3) {
        //updateQueue(3);
    }
}

void Model::updateQueue(int level)
{
    for (int i = 0; i < (int)items.size(); i++) {
        if (items.at(i)->getLevel() == level) //modify this to be MORE dynamic
            currGameItems.enqueue(i);
    }

    itemsLeft = currGameItems.size();
    //shuffle queue
    std::vector<QImage *> barItemNames;
    for (int i = 0; i < 5; i++) {
        int index = currGameItems.dequeue();
        barItems.push_back(index);
        barItemNames.push_back(items.at(index)->getImage());
    }
    emit sendFiveBarItems(barItemNames);
}

void Model::setUpItems()
{
    for(int i = 0; i < 3; i++){
        items.push_back(new TrashItems(i));
        items.push_back(new RecycleItems(i));
        items.push_back(new CompostItems(i));
    }
}

// TITLE SCREEN METHODS

// PURPOSE SCREEN METHODS

// INSTRUCTION SCREEN METHODS

// GAME SCREEN METHODS
void Model::mouseReleased(QPointF position)
{
    if (currentItemIndex == -1)
        return;
    bool trashCollision;
    bool correctCollision = checkTrashCollision(position, trashCollision);

    if (trashCollision) {
        if (currGameItems.size() > 0) {
            int index = barItems[currentItemIndex];
            barItems[currentItemIndex] = currGameItems.dequeue();
            if (!correctCollision)
                currGameItems.enqueue(index);
        } else {
            if (correctCollision)
                barItems[currentItemIndex] = -1;
        }
        if (correctCollision)
            itemsLeft--;
        if (itemsLeft == 0) {
            switch (currentLevel) {
            case 1: //go to loading screen 1
                emit changeScreen(4);
                return;
            case 2: //go to loading screen 2
                emit changeScreen(5);
                return;
            case 3: // go to conclusion page
                emit changeScreen(6);
                return;
            }
        }
    }
    std::vector<QImage *> barItemNames;
    QImage emptyImage(":/images/images/TrashImages/Empty.png");
    for (int i = 0; i < (int)barItems.size(); i++) {
        if (barItems.at(i) == -1)
            barItemNames.push_back(&emptyImage);
        else
            barItemNames.push_back(items.at(barItems.at(i))->getImage());
    }
    emit sendFiveBarItems(barItemNames);
    currentItemIndex = -1;
}

bool Model::checkTrashCollision(QPointF position, bool &trashCollision)
{
    Items::ItemType currentItemType = items.at(currentItemIndex)->getType();
    //Items::ItemType currentItemType = items.at(currentItemBarLoc)->getType();
    trashCollision = true;
    bool correctCollision = false;
    if (position.x() > 81 && position.x() < 204 && position.y() > 288 && position.y() < 463) {
        correctCollision = (int)currentItemType == (int)cans.at(0)->getType();
        emit trashInBin(correctCollision);
    } else if (position.x() > 261 && position.x() < 385 && position.y() > 288
               && position.y() < 463) {
        correctCollision = (int)currentItemType == (int)cans.at(1)->getType();
        emit trashInBin(correctCollision);
    } else if (position.x() > 440 && position.x() < 573 && position.y() > 288
               && position.y() < 463) {
        correctCollision = (int)currentItemType == (int)cans.at(2)->getType();
        emit trashInBin(correctCollision);
    } else {
        trashCollision = false;
    }
    return correctCollision;
}

void Model::receiveSelectedItem(int index) // TODO this might have coordinate parameters from which we calculate index
{
    std::cout << "Model: Receive Selected Item" << std::endl;
    if(barItems[index] == -1) {
        return;
    }

    currentItemIndex = index;
    emit sendItemInfoToWindow(items.at(barItems.at(currentItemIndex))->getType(),
                              items.at(barItems.at(currentItemIndex))->getName(),
                              items.at(barItems.at(currentItemIndex))->getDescription(),
                              (*items.at(barItems.at(currentItemIndex))->getImage()));
    QImage image = *items.at(barItems.at(currentItemIndex))->getImage();
    emit sendItemPhoto(image);
    // TODO check that I'm using enums correctly
}
// LOADING SCREEN METHODS

// FIRST LOADING SCREEN METHODS
void Model::setupFirstLoadingWorld()
{
    // Define the ground body.
    b2BodyDef groundBodyDef;
    groundBodyDef.position.Set(0.0f, 4.0f);

    // Call the body factory which allocates memory for the ground body
    // from a pool and creates the ground box shape (also from a pool).
    // The body is also added to the world.
    b2Body* groundBody = world.CreateBody(&groundBodyDef);

    // Define the ground box shape.
    b2PolygonShape groundBox;

    // The extents are the half-widths of the box.
    groundBox.SetAsBox(50.0f, 0.001f);

    // Add the ground fixture to the ground body.
    groundBody->CreateFixture(&groundBox, 0.0f);

    // Define the dynamic body. We set its position and call the body factory.
    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(-2.0f, 0.0f);
    body = world.CreateBody(&bodyDef);

    // Apply a force so that the body moves to the right
    body->ApplyForceToCenter(b2Vec2 (0.08f, 0.0f), true);

    // Define another box shape for our dynamic body.
    b2PolygonShape dynamicBox;
    dynamicBox.SetAsBox(0.01f, 0.01f);

    // Define the dynamic body fixture.
    b2FixtureDef fixtureDef;
    fixtureDef.shape = &dynamicBox;

    // Set the box density to be non-zero, so it will be dynamic.
    fixtureDef.density = 1.0f;

    // Add restitution for bounciness
    fixtureDef.restitution = 0.9f;

    // Override the default friction.
    fixtureDef.friction = 0.01f;

    // Add the shape to the body.
    body->CreateFixture(&fixtureDef);

    // Tells the world to update the dynamic body
    updateFirstLoadingWorld();
}

void Model::updateFirstLoadingWorld(){
    // Prepare for simulation. Typically we use a time step of 1/60 of a
    // second (60Hz) and 10 iterations. This provides a high quality simulation
    // in most game scenarios.
    float32 timeStep = 1.0f / 60.0f;
    int32 velocityIterations = 6;
    int32 positionIterations = 2;

    // Instruct the world to perform a single step of simulation.
    // It is generally best to keep the time step and iterations fixed.
    world.Step(timeStep, velocityIterations, positionIterations);
    b2Vec2 position = body->GetPosition();

    emit updateLabelPosition(position.x*100, position.y*100);

    // Has the simulation run for only 5 seconds.
    if (simulationDuration > 0)
    {
        simulationDuration -= 20;
        QTimer::singleShot(20, this, &Model::updateFirstLoadingWorld);
    }
    else
        simulationDuration = 5000;
}

void Model::setupSecondLoadingWorld()
{
    // Define the ground body.
    b2BodyDef groundBodyDef;
    groundBodyDef.position.Set(0.0f, 4.0f);

    // Call the body factory which allocates memory for the ground body
    // from a pool and creates the ground box shape (also from a pool).
    // The body is also added to the world.
    b2Body* groundBody = world.CreateBody(&groundBodyDef);

    // Define the ground box shape.
    b2PolygonShape groundBox;

    // The extents are the half-widths of the box.
    groundBox.SetAsBox(50.0f, 0.001f);

    // Add the ground fixture to the ground body.
    groundBody->CreateFixture(&groundBox, 0.0f);

    // Define the dynamic body. We set its position and call the body factory.
    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(1.0f, 0.0f);
    body = world.CreateBody(&bodyDef);

    // Apply a force so that the body moves to the right
    //body->ApplyForceToCenter(b2Vec2 (0.08f, 0.0f), true);

    // Define another box shape for our dynamic body.
    b2PolygonShape dynamicBox;
    dynamicBox.SetAsBox(0.01f, 0.01f);

    // Define the dynamic body fixture.
    b2FixtureDef fixtureDef;
    fixtureDef.shape = &dynamicBox;

    // Set the box density to be non-zero, so it will be dynamic.
    fixtureDef.density = 1.0f;

    // Add restitution for bounciness
    fixtureDef.restitution = 0.9f;

    // Override the default friction.
    fixtureDef.friction = 0.01f;

    // Add the shape to the body.
    body->CreateFixture(&fixtureDef);

    for(int i = 0; i < 20; i++)
    {
        raindrops.push_back(new Rain());
    }

    // Tells the world to update the dynamic body
    updateSecondLoadingWorld();
}

void Model::updateSecondLoadingWorld(){
    // Prepare for simulation. Typically we use a time step of 1/60 of a
    // second (60Hz) and 10 iterations. This provides a high quality simulation
    // in most game scenarios.
    float32 timeStep = 1.0f / 60.0f;
    int32 velocityIterations = 6;
    int32 positionIterations = 2;

    // Instruct the world to perform a single step of simulation.
    // It is generally best to keep the time step and iterations fixed.
    world.Step(timeStep, velocityIterations, positionIterations);
    b2Vec2 position = body->GetPosition();

    for(int i = 0; i < 20; i++)
    {
        raindrops[i]->xPos = position.x*100;
        raindrops[i]->yPos = position.y*100;
    }

    emit updatedRainVector(raindrops);
    //emit updateRainPosition(position.x*100, position.y*100);

    //emit updateRain();

    // Has the simulation run for only 5 seconds.
    if (simulationDuration > 0)
    {
        //simulationDuration -= 20;
        QTimer::singleShot(20, this, &Model::updateSecondLoadingWorld);
    }
    else
        simulationDuration = 5000;
}

// CONCLUDING SCREEN METHODS
