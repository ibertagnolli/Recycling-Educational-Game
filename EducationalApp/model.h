/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#ifndef MODEL_H
#define MODEL_H
#include "bins.h"
#include "Box2D/Box2D.h"
#include "items.h"
#include <vector>
#include <QObject>
#include <QQueue>
#include <QTimer>

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

    /**
     * @brief Checks to see if there is a collision between where the mouse is released and a trash can object
     * @param position of where the mouse is released
     */
    void mouseReleased(QPointF position);

signals:
    void updateLabelPosition(int xPosition, int yPosition);

    /**
     * @brief Informs the view that trash has been put in a bin
     * @param correctlyIdentified: whether or not the trash item type matches the trash can type
     */
    void trashInBin(bool correctlyIdentified);

    /**
     * @brief Informs the view which items should show up on the item bar
     * @param items - array of trash items
     */
    void itemBar(std::vector<int> items);

    /**
     * @brief Informs the view the current screen the user is viewing must be changed
     * @param screen - index of the screen to go to
     */
    void changeScreen(int screen);

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
    b2World world;
    b2Body *body;
    int simulationDuration;

    /**
     * @brief Keeps track of the current level in the game
     */
    int currentLevel = 0;

    /**
     * @brief keeps track of what item is currently in use, -1 when none is selected
     */
    int currentItem = -1;

    /**
     * @brief Keeps track of where the current item is in the item bar, -1 when no item is selected
     */
    int currentItemBarLoc = -1;

    /**
    * @brief cans - A list of all of the bins that will be 
    * in the game.
    **/
    std::vector<Bins*> cans;
    
    /**
     * @brief items - A list of all of the items that will be
     * in the game.
     */
    std::vector<Items *> items;

    /**
     * @brief Keeps track of the current 5 item bar locations
     */
    std::vector<int> barItemLocs;

    /**
     * @brief Keeps track of the current items in the game
     */
    QQueue<int> currGameItems;

    /**
     * @brief setUpItems - A helper method that sets up
     * all the items that will be in the game.
     */
    void setUpItems();

    /**
     * @brief Checks if the trash item collided with a trash can
     * @param position of where the trash item is released
     * @return whether or not a collision occured
     */
    bool checkTrashCollision(QPointF position, bool &trashCollision);

    void updateQueue(int level);
};
#endif // MODEL_H
