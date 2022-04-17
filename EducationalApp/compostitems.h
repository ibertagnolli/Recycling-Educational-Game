#ifndef COMPOSTITEMS_H
#define COMPOSTITEMS_H

#include "items.h"
#include <QImage>

/**
 * @brief The CompostItems class - This class is used to
 * represent the compost items that are going to be
 * present in the game.
 */
class CompostItems : public Items
{
public:
    /**
     * @brief CompostItems - The constructor for compost items
     * @param index - Indicates which compost item to create.
     */
    CompostItems(int index);

    /**
     * @brief ~CompostItems - The destructor for the
     * compost items.
     * */
    ~CompostItems();

    /**
     * @brief getType - Gets the item type of the
     * particular compost item
     * @return The ItemType enum: Trash = 0,
     * Recycle = 1, Compost = 2, Special = 3.
     */
    ItemType getType();

    /**
     * @brief getName - Gets the specific name of
     * the item
     * @return String representation of the item's name
     */
    std::string getName();

    /**
     * @brief getDescription - Gets the specific
     * description of the item
     * @return String representation of the item's
     * description.
     */
    std::string getDescription();
private:
    /**
     * @brief name - The specific item's name
     */
    std::string name;

    /**
     * @brief description - The specific item's
     * description.
     */
    std::string description;

    /**
     * @brief itemImage - The specific item's
     * icon
     */
    QImage itemImage;

    /**
     * @brief setImage - A helper method that
     * sets the specific image for the item
     * @param index - Indicates which item icon to set
     */
    void setImage(int index);

    /**
     * @brief setDescription - A helper method that
     * sets the specific description for the item
     * @param index - Indicates which item description
     */
    void setDescription(int index);

    /**
     * @brief setName - A helper method that set the
     * specific name for the item
     * @param index - Indicates which item name
     */
    void setName(int index);
};

#endif // COMPOSTITEMS_H
