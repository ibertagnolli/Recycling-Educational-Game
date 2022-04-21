#ifndef BINS_H
#define BINS_H

#include <string>
#include <QImage>
#include <vector>
#include <QString>

/**
 * @brief The Bins class - The abstract class that allows
 * for multiple bin types to be used throughout the game levels.
 */
class Bins
{

public:
    /**
     * @brief The BinType enum - A way of classification
     * of the bins that can be inherited from.
     */
    enum BinType {
        Trash = 0,
        Recycle = 1,
        Compost = 2,
        Special = 3
    };

    /**
     * @brief ~Bins - The Virtual Destructor
     * that will allow the bins pointer to delete the
     * inherited objects.
     */
    virtual ~Bins() {};

    /**
     * @brief getDescription - Retrieves the description of the
     * specific bin object.
     * @return The string description of the specific object.
     */
    virtual QString getDescription(void) = 0;

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
    virtual QString getName(void) = 0;

    /**
     * @brief getRegion - Retrieves the bounding region of the
     * bin object.
     * @return Vector<int> ordered with x, y, width, height
     */
    virtual std::vector<int> getRegion(void) = 0;

    /**
     * @brief CollisionWithMe - Checks whether the given item
     * collides with the trash bin.
     * @param pos - x and y position
     * @return Boolean indicating collisions.
     */
    virtual bool CollisionWithMe(QPointF pos) = 0;

    /**
     * @brief setRegion - Sets the region of the bin based
     * on the image label
     * @param x - The top left x position
     * @param y - The top left y position
     * @param width - The width of the label
     * @param height - The height of the label
     */
    virtual void setRegion(int x, int y, int width, int height) = 0;
};

#endif // BINS_H
