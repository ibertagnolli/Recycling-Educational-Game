#ifndef COMPOSTITEMS_H
#define COMPOSTITEMS_H

#include "items.h"

/**
 * @brief The CompostItems class - This class is used to
 * represent the compost items that are going to be
 * present in the game.
 */
class CompostItems : public Items
{
public:
    /**
     * @brief CompostItems - The default constructor
     * for compost items.
     */
    CompostItems();

    /**
     * @brief ~CompostItems - The destructor for the
     * compost items.
     * */
    ~CompostItems();
};

#endif // COMPOSTITEMS_H
