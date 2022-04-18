#ifndef ITEMS_H
#define ITEMS_H


#include <string>

/**
 * @brief The Items class - This class is an abstract class
 * that will all items will inherit from for the game.
 */
class Items
{
public:
    /**
     * @brief The ItemType enum - Helps classify the
     * types of items that are within the game.
     */
    enum ItemType {
        Trash = 0,
        Recycle = 1,
        Compost = 2,
        Special = 3
    };

    /**
     * @brief getType - The abstract method to
     * return the type of the item
     * @return ItemType enum: Trash = 0,
     * Recycle = 1, Compost = 2, Special = 3.
     */
    virtual ItemType getType(void) = 0;

    /**
     * @brief getName - the abstract method to
     * return the name of the item
     * @return String representation of the
     * name of the item.
     */
    virtual std::string getName(void) = 0;

    /**
     * @brief getDescription - The abstract method to
     * return a simple description of the item.
     * @return a simple description of the item.
     */
    virtual std::string getDescription(void) = 0;

    /**
     * @brief getLevel- The abstract method to return the level the item is used on
     * @return level of the item
     */
    virtual int getLevel(void) = 0;
};

#endif // ITEMS_H
