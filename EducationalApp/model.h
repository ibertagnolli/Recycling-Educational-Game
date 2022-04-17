#ifndef MODEL_H
#define MODEL_H

#include <QObject>

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

    /**
     * @brief Checks to see if there is a collision between where the mouse is released and a trash can object
     * @param position of where the mouse is released
     */
    void mouseReleased(QPointF position);

signals:

private:
    bool checkTrashCollision(QPointF position);
};

#endif // MODEL_H
