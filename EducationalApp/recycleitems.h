#ifndef RECYCLEITEMS_H
#define RECYCLEITEMS_H

#include "items.h"

/**
 * @brief The RecycleItems class - This class is used to
 * represent the recycle items that are going to be present
 * in the game.
 */
class RecycleItems : public Items
{
public:
    /**
     * @brief RecycleItems - The default constructor
     * for the recycle items.
     */
    RecycleItems();

    /**
     * @brief ~RecycleItems - The destructor for recycle
     * items.
     **/
    ~RecycleItems();
};

#endif // RECYCLEITEMS_H
