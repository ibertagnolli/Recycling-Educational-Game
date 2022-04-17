/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#ifndef MODEL_H
#define MODEL_H
#include "bins.h"

#include <vector>
#include <QObject>
#include "items.h"
#include <QTimer>
#include "Box2D/Box2D.h"

/**
 * @brief The Model class - This class is used
 * to manage all of the logic throughout the game
 */
class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = nullptr);
    /**
     * @brief When informed by the view, changes to the current screen's data
     * @param current screen index
     */
    void pageChanged(int index);

signals:
    void updateLabelPosition(int xPosition, int yPosition);

public slots:
    /**
     * @brief Sets up the world for the first loading screen.
     * This defines a ground and a dynamic body that bounces on the ground.
     */
    void setupFirstLoadingWorld();

private slots:
    /**
     * @brief Updates the world to perform a single step of the simulation.
     * The updated coordinates of the body are emitted.
     * The simulation runs until the simulation duration ends.
     */
    void updateFirstLoadingWorld();

private:

    /**
    * @brief cans - A list of all of the bins that will be 
    * in the game.
    **/
    std::vector<Bins*> cans;
    
    /**
     * @brief items - A list of all of the items that will be
     * in the game.
     */
    std::vector<Items*> items;

    /**
     * @brief setUpItems - A helper method that sets up
     * all the items that will be in the game.
     */
    void setUpItems();
    b2World world;
    b2Body* body;
    int simulationDuration;
};
#endif // MODEL_H
