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
     * @brief - The desctructor of the model
     **/
    ~Model();

    /**
     * @brief When informed by the view, changes to the current screen's data
     * @param current screen index
     */
    void updateScreenIndex(int index);

    /**
     * @brief Checks to see if there is a collision between where the mouse is released and a trash can object
     * @param position of where the mouse is released
     */
    void mouseReleased(QPointF position);

signals:
    /**
     * @brief updateLabelPosition - A signal that will update the label position
     * @param xPosition - The x cordinates
     * @param yPosition - The y cordinates
     */
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
    void sendFiveBarItems(std::vector<QImage *> items);

    /**
     * @brief Informs the view the current screen the user is viewing must be changed
     * @param screen - index of the screen to go to
     */
    void changeScreen(int screen);

    /**
     * @brief Emitted when the current selected item is updated. Sends the item's
     * trash type, name, and description to the View. TODO have name match image name
     * to easily upload the image without sending it!
     */
    void sendItemInfoToWindow(int itemType, QString itemName, QString itemDescrip,
                              QImage image);

    /**
     * @brief sendItemPhoto - A slot that sends
     * the image photo to the view
     * @param image - The image.
     */
    void sendItemPhoto(QImage image);

public slots:
    /**
     * @brief Sets up the world for the first loading screen.
     * This defines a ground and a dynamic body that bounces on the ground.
     */
    void setupFirstLoadingWorld();

    /**
     * @brief Connected to View's signal that a new trash item was selected.
     * Updates the selected trash item.
     * @param index - the index of the selected trash item.
     *
     * TODO CONNECT WITH MOUSERELEASE BRANCH
     */
    void receiveSelectedItem(int index);



private slots:
    /**
     * @brief Updates the world to perform a single step of the simulation.
     * The updated coordinates of the body are emitted.
     * The simulation runs until the simulation duration ends.
     */
    void updateFirstLoadingWorld();

private:
    /**
     * @brief world - The world object that allows for the
     * integeration of the Box2D
     */
    b2World world;

    /**
     * @brief body - The body object that allows for
     * the integeration of the Box2D
     */
    b2Body *body;

    /**
     * @brief simulationDuration - The amount of
     * time that will run the simulation of the
     * loading screen
     */
    int simulationDuration;

    /**
     * @brief Keeps track of the current level in the game
     */
    int currentLevel = 0;

    /**
     * @brief keeps track of what item is currently in use. Its index is from the
     * vector of all trash items. -1 when none is selected.
     */
    int currentItemIndex = -1;

    /**
     * @brief itemsLeft - an indicator of how many items are remaining
     * in the game.
     */
    int itemsLeft;

    /**
     * @brief Keeps track of where the current item is in the item bar, -1 when no item is selected
     */
    //int currentItemBarLoc = -1;

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
    std::vector<int> barItems;

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
     * @brief updateTheBarItems - A helper method that
     * updates all of the items in the bar that is shown in the
     * game.
     * @param correctCollision - Whether there was a collision
     * or not.
     */
    void updateTheBarItemsIndex(bool correctCollision);

    /**
     * @brief updateTheBarItemIcons - A helper method that
     * updates the images of the item bar.
     */
    void updateTheBarItemIcons();

    /**
     * @brief timeToSwitch - Indicates if it is time to switch items
     * and emit signals to switch when necessary.
     * @return A boolean indicated that it sent the switch signal.
     */
    bool timeToSwitchLevel();
    /**
     * @brief Checks if the trash item collided with a trash can
     * @param position of where the trash item is released
     * @return whether or not a collision occured
     */
    bool checkTrashCollision(QPointF position, bool &trashCollision, int index);

    /**
     * @brief updateQueue - A method that will update the items
     * in the queue for the game.
     * @param level - The level that we are currently at.
     */
    void updateQueue(int level);
};
#endif // MODEL_H
