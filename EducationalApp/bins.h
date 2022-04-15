#ifndef BINS_H
#define BINS_H

#include <string>
#include <QImage>
#include <vector>

/**
 * @brief The Bins class - The abstract class that allows
 * for multiple bin types to be used throughout the game levels.
 */
class Bins
{
public:
    /**
     * @brief getDescription - Retrieves the description of the
     * specific bin object.
     * @return The string description of the specific object.
     */
    virtual std::string getDescription() = 0;

    /**
     * @brief getImage - Retrives the associated bin image for the
     * trash object.
     * @return Qimage pointer for the specific bin object
     */
    virtual QImage* getImage() = 0;

    /**
     * @brief getType - Retrives the type of bins associated with the
     * the bin object
     * @return The string representation of the type of bin
     */
    virtual std::string getType() = 0;

    /**
     * @brief getName - Retrieves the specific name of the bin
     * object
     * @return The string representation of the bin name
     */
    virtual std::string getName() = 0;

    /**
     * @brief getRegion - Retrieves the bounding region of the
     * bin object.
     * @return Vector<int> ordered with x, y, width, height
     */
    virtual std::vector<int> getRegion() = 0;
};

#endif // BINS_H
