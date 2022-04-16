#ifndef TRASHITEMS_H
#define TRASHITEMS_H

#include "items.h"
#include <QImage>

/**
 * @brief The TrashItems class - This class is used to
 * represent the trash items that are going to be part of the
 * game.
 */
class TrashItems : public Items
{
public:
    /**
     * @brief TrashItems - The constructor for TrashItems
     * @param index - Indicates the specific trash item
     */
    TrashItems(int index);
    /**
     * @brief ~TrashItem - The destructor for the trash
     * items for the game.
     * */
    ~TrashItems();

//    /**
//     * @brief getType - Gets the item type of the specific item
//     * @return ItemType enum. Trash = 0, Recycle = 1, Compost = 2
//     * Special = 3.
//     */
//    ItemType getType();

//    /**
//     * @brief getName - Gets the item's specific name
//     * @return A string representation of the item's name
//     */
//    std::string getName();

//    /**
//     * @brief getDescription - Gets the item's specific
//     * description.
//     * @return A string representation of the item's
//     * description.
//     */
//    std::string getDescription();
private:
    /**
     * @brief name - The item's specific name
     */
    std::string name;

    /**
     * @brief description - The item's specific description
     */
    std::string description;

    /**
     * @brief itemImage - The item's specific image.
     */
    QImage itemImage;

    /**
     * @brief setImage - A helper method that will select the
     * specific image for the item.
     * @param index - Indicates which image to choose.
     */
    void setImage(int index);

    /**
     * @brief setDescription - A helper method that will select
     * the specific item's description
     * @param index - Indicates which description to choose.
     */
    void setDescription(int index);

    /**
     * @brief setName - A helper method that will select
     * the specific item's name
     * @param index - Indicates which description to choose.
     */
    void setName(int index);

};

#endif // TRASHITEMS_H
