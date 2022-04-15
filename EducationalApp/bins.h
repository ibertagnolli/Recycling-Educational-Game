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
    enum BinType {
        Trash = 0,
        Recycle = 1,
        Yardwaste = 2,
        Special = 3
    };

    /**
     * @brief Bins - Constructor to initialize
     * all of the variables that are inherited
     * that is shared amoung differing classes
     * @param region - x, y, width, height
     * @param type - Bin type
     * @param name - Name of Bin
     * @param description - Explaination of the
     * bin
     */
    Bins(std::vector<int> region, BinType type,
         std::string name, std::string description);

    /**
     * @brief getDescription - Retrieves the description of the
     * specific bin object.
     * @return The string description of the specific object.
     */
    virtual std::string getDescription(void) = 0;

    /**
     * @brief getImage - Retrives the associated bin image for the
     * trash object.
     * @return Qimage pointer for the specific bin object
     */
    virtual QImage* getImage(void) = 0;

    /**
     * @brief getType - Retrives the type of bins associated with the
     * the bin object
     * @return The string representation of the type of bin
     */
    virtual BinType getType(void) = 0;

    /**
     * @brief getName - Retrieves the specific name of the bin
     * object
     * @return The string representation of the bin name
     */
    virtual std::string getName(void) = 0;

    /**
     * @brief getRegion - Retrieves the bounding region of the
     * bin object.
     * @return Vector<int> ordered with x, y, width, height
     */
    virtual std::vector<int> getRegion(void) = 0;

protected:
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
    BinType type;

    /**
     * @brief binImage - The image of the bin
     */
    QImage binImage;

    void setImage(QImage image) {binImage = image.copy();}
};

#endif // BINS_H
