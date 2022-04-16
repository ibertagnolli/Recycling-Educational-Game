#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

#include "model.h"
#include "view.h"

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

public slots:
    // First Loading Screen
    void firstLoadingScreenConnections();


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


};

#endif // CONTROLLER_H
