#ifndef MODEL_H
#define MODEL_H
#include "bins.h"

#include <vector>
#include <QObject>
#include "items.h"

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

private:
    bool checkTrashCollision(QPointF position);

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
};

#endif // MODEL_H
