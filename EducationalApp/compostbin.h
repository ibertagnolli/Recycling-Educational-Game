#ifndef COMPOSTBIN_H
#define COMPOSTBIN_H

# include "bins.h"
# include <QString>

/**
 * @brief The CompostBin class - This class stores all of the information
 * and functions that happens for the Compost bin for the game levels.
 */
class CompostBin : public Bins
{
    /**
     * @brief binImage - the image of the bin
     */
    QImage binImage;

public:
    /**
     * @brief YardWaste - Constructor for YardWaste
     * bins.
     */
    CompostBin();

    /**
     * @brief - The destructor.
     **/
    ~CompostBin();

    /**
     * @brief getDescription - retreives the description
     * of the bin object
     * @return String representation of the description
     */
    QString getDescription();

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
    QString getName();

    /**
     * @brief getRegion - Retrieves the bounding region of
     * the bin
     * @return A vector of intergers that
     * represents x,y, width, height
     */
    std::vector<int> getRegion();

    /**
     * @brief CollisionWithMe - Indicates collision between
     * bins and position.
     */
    bool CollisionWithMe(QPointF pos);

    /**
     * @brief setRegion - Sets the region of the bin based
     * on the image label
     * @param x - The top left x position
     * @param y - The top left y position
     * @param width - The width of the label
     * @param height - The height of the label
     */
    void setRegion(int x, int y, int width, int height);

private:
    /**
     * @brief x - The top left position x cordinate
     * of the label of the image.
     */
    int x;

    /**
     * @brief y - The top left position y cordinate
     * of the label of the image
     */
    int y;

    /**
     * @brief width - The width of the bin image
     */
    int width;

    /**
     * @brief height - The height of the bin image
     */
    int height;
};

#endif // COMPOSTBIN_H
