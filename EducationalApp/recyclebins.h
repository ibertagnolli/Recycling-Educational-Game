#ifndef RECYCLEBINS_H
#define RECYCLEBINS_H

#include "bins.h"

/**
 * @brief The RecycleBins class - This class is used to
 * store all information and functions for the recycling
 * bins for the game.
 */
class RecycleBins : public Bins
{
    /**
     * @brief binImage - The image of the bin
     */
    QImage binImage;

public:

    /**
     * @brief RecycleBins - The constructor for recycle
     * bin
     */
    RecycleBins();

    /**
     * @brief ~RecycleBins - The destructor for recycle
     **/
    ~RecycleBins();

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

#endif // RECYCLEBINS_H
