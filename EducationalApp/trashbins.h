#ifndef TRASHBINS_H
#define TRASHBINS_H

#include "bins.h"
#include <string>
#include <vector>
#include <QImage>

/**
 * @brief The TrashBins class - This class is used
 * to create trash bin objects
 */
class TrashBins : public Bins
{
    /**
     * @brief boundingRegion - x cord, y cord,
     * width, height
     */
    std::vector<int> boundingRegion;

    /**
     * @brief description - explaination of
     * what this bin is.
     */
    std::string description;

    /**
     * @brief name - The name of the trash bin
     */
    std::string name;

    /**
     * @brief type - the type of bin
     */
    std::string type;

public:
    /**
     * @brief TrashBins - The default constructor
     * to create a trash bin object
     */
    TrashBins();

    /**
     * @brief getDescription - retreives the description
     * of the trash bin object
     * @return String representation of the description
     */
    std::string getDescription();

    /**
     * @brief getImage - Retrieves the image of the reference
     * for the trash object.
     * @return A pointer to the trash bin image
     */
    QImage* getImage();

    /**
     * @brief getType - Indicates the type of bin
     * @return a string representation of the type of bin.
     */
    std::string getType();

    /**
     * @brief getName - Gets the name of the bin
     * @return The string representation of the name of the bin
     */
    std::string getName();

    /**
     * @brief getRegion - Retrieves the bounding region of
     * the trash bin
     * @return A vector of intergers that
     * represents x,y, width, height
     */
    std::vector<int> getRegion();

};

#endif // TRASHBINS_H
