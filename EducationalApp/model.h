#ifndef MODEL_H
#define MODEL_H
#include "bins.h"

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

signals:

private:
    std::vector<Bins*> cans;
};

#endif // MODEL_H
