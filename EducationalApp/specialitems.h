#ifndef SPECIALITEMS_H
#define SPECIALITEMS_H

#include "items.h"
#include <QString>
#include <QImage>

/**
 * @brief The SpecialItems class - This class is used to
 * represent the special recycling items that will be
 * present during the game.
 */
class SpecialItems : public Items
{
public:
    /**
     * @brief SpecialItems - The default constructor
     * for the special recycling items.
     */
    SpecialItems(int itemIndex);
    /**
     * @brief ~SpecialItems - The destructor for
     * the special recycling items.
     **/
    ~SpecialItems();
    /**
     * @brief getType - returns the items classification
     * that corsponds to which bin it belongs to.
     * @return A ItemType enum that incidates which bin
     * the item should be placed.
     */
    ItemType getType();

    /**
     * @brief getName - Returns the name of the item
     * @return A string representation of the name
     */
    QString getName();

    /**
     * @brief getDescription - Returns the description
     * of the item, and process that should happen to
     * be placed in the bin, and which bin it belongs to.
     * @return A string representation of the description
     * of the item.
     */
    QString getDescription();

    /**
     * @brief getImage - Gets the image for the specific
     * item
     * @return
     */
    QImage* getImage();

    /**
     * @brief Returns the item's game level
     * @return int representing each game level
     */
    int getLevel();

private:
    /**
     * @brief Level the item is used on (0-all levels, 1-level 1, 2-level 2, 3-level 3)
     */
    int level;

    /**
     * @brief itemImage - The icon associated with the item.
     */
    QImage itemImage;

    /**
     * @brief name - The name associated with the item.
     */
    QString name;

    /**
     * @brief description - The description associated with
     * the item.
     */
    QString description;

    /**
     * @brief setItemImage - A helper method that will select
     * the correct image for the item
     * @param index - The index to used to select the image.
     */
    void setItemImage(int index);

    /**
     * @brief setItemName - A helper method that will select
     * the correct name for the item
     * @param index - The index used to select the name.
     */
    void setItemName(int index);

    /**
     * @brief setItemDescription - A helper method that
     * will select the correct description for the item
     * @param index - The index used to select the description.
     */
    void setItemDescription(int index);

    /**
     * @brief setLevel - A helper method that will select the specific item's level
     * @param index - Indicates which level to choose.
     */
    void setLevel(int index);
};


#endif // SPECIALITEMS_H
