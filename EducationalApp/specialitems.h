#ifndef SPECIALITEMS_H
#define SPECIALITEMS_H

#include "items.h"

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
    SpecialItems();

    /**
     * @brief ~SpecialItems - The destructor for
     * the special recycling items.
     **/
    ~SpecialItems();
};

#endif // SPECIALITEMS_H
