#ifndef TRASHBINS_H
#define TRASHBINS_H

#include "bins.h"
#include <string>
#include <vector>
#include <QImage>
#include <QString>

/**
 * @brief The TrashBins class - This class is used to
 * store all of the information and functionality of the
 * trash bins for the game.
 */
class TrashBins : public Bins
{
    /**
     * @brief binImage - The image of the bin
     */
    QImage binImage;

public:
    /**
     * @brief TrashBins - The default constructor
     * to create a trash bin object
     */
    TrashBins();

    /**
     * @brief ~TrashBins - The destructor for the
     * trash bin.
     * */
    ~TrashBins();

    /**
     * @brief getDescription - retreives the description
     * of the trash bin object
     * @return String representation of the description
     */
    QString getDescription();

    /**
     * @brief getImage - Retrieves the image of the reference
     * for the trash object.
     * @return A pointer to the trash bin image
     */
    QImage* getImage();

    /**
     * @brief CollisionWithMe - Indicates collision between
     * bins and position.
     */
    bool CollisionWithMe(QPointF pos);

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
     * the trash bin
     * @return A vector of intergers that
     * represents x,y, width, height
     */
    std::vector<int> getRegion();

};

#endif // TRASHBINS_H
