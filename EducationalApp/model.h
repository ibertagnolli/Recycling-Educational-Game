#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "Box2D/Box2D.h"

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

public slots:
    void setupWorld();

private:
    b2World world;
    b2Body* body;
};

#endif // MODEL_H
