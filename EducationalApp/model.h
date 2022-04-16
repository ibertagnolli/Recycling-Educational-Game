#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "Box2D/Box2D.h"
#include <QTimer>

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
    // First Loading Screen Signals
    void updateLabelPosition(int xPosition, int yPosition);

public slots:
    void setupWorld();
    void updateWorld();

private:
    b2World world;
    b2Body* body;
};

#endif // MODEL_H
