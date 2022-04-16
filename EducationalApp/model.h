#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <QObject>
#include "items.h"

class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = nullptr);
    /**
     * @brief When informed by the view, changes to the current screen's data
     * @param current screen index
     */
    void pageChanged(int index);

signals:

private:
    /**
     * @brief items - A list of all of the items that will be
     * in the game.
     */
    std::vector<Items*> items;

    /**
     * @brief setUpItems - A helper method that sets up
     * all the items that will be in the game.
     */
    void setUpItems();
};

#endif // MODEL_H
