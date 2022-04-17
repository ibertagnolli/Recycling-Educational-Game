#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

#include "model.h"
#include "view.h"

/**
 * @brief The Controller class - This class is used to manage all
 * of the connections between model and view objects.
 */
class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    /**
     * @brief Constructor for a controller object
     * @param the current game's instance of the view
     * @param the current game's instance of the model
     */
    Controller(View *view, Model *model);

signals:

private:
    /**
     * @brief Holds the current instance of the model.
     */
    Model *model;

    /**
     * @brief Holds the current instance of the view
     */
    View *view;

    /**
     * @brief General connections between the view and the model
     */
    void generalConnections();

    /**
     * @brief Connections between the game screen and the model
     */
    void gameScreenConnections();
};

#endif // CONTROLLER_H
