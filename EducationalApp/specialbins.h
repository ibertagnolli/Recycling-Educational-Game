#ifndef SPECIALBINS_H
#define SPECIALBINS_H

#include "bins.h"

/**
 * @brief The SpecialBins class - This class is used
 * to represent all of the special locations that
 * certain items have to be recycled at
 */
class SpecialBins : public Bins
{

public:
    /**
     * @brief SpecialBins - The constructor for the
     * special bin
     * @param name - The specific name location
     * for the special recycle center.
     */
    SpecialBins(std::string name);

    /**
     * @brief getDescription - retreives the description
     * of the bin object
     * @return String representation of the description
     */
    std::string getDescription();

    /**
     * @brief getImage - Retrieves the image of the reference
     * for the bin object.
     * @return A pointer to the recycle bin image
     */
    QImage* getImage();

    /**
     * @brief getType - Indicates the type of bin
     * @return a string representation of the type of bin.
     */
    Bins::BinType getType();

    /**
     * @brief getName - Gets the name of the bin
     * @return The string representation of the name of the bin
     */
    std::string getName();

    /**
     * @brief getRegion - Retrieves the bounding region of
     * the bin
     * @return A vector of intergers that
     * represents x,y, width, height
     */
    std::vector<int> getRegion();
};

#endif // SPECIALBINS_H
