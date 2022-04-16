#ifndef TRASHITEMS_H
#define TRASHITEMS_H

#include "items.h"

/**
 * @brief The TrashItems class - This class is used to
 * represent the trash items that are going to be part of the
 * game.
 */
class TrashItems : public Items
{
public:
    /**
     * @brief TrashItems - The default constructor
     * for trash items for the game
     */
    TrashItems();
    /**
     * @brief ~TrashItem - The destructor for the trash
     * items for the game.
     * */
    ~TrashItems();
};

#endif // TRASHITEMS_H
