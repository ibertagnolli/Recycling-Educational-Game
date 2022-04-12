#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class View; }
QT_END_NAMESPACE

class View : public QMainWindow
{
    Q_OBJECT

public:
    View(QWidget *parent = nullptr);
    /*
    * Destructor for the View
    */
    ~View();

signals:

    /**
     * @brief Informs the model when the current page has changed
     * @param index of the current model page
     */
    void currentPageChanged(int index);

private:
    /**
     * @brief Tracks the current ui
     */
    Ui::View *ui;

private slots:

    /**
     * @brief Informs the view whenever the current widget has changed
     * @param current stack widget index
     */
    void on_stackWidget_currentChanged(int index);

    /**
    * @brief Moves user from titleScreen to purposeScreen.
    */
    void on_startButton_clicked();

    /**
    * @brief Moves user from purposeScreen to instructionScreen.
    */
    void on_buttonToInstrScreen_clicked();

    /**
    * @brief Moves user from instructionScreen to gameScreen.
    */
    void on_buttonToGameScreen_clicked();

    /**
    * @brief Moves user from instructionScreen back to the purposeScreen
    */
    void on_buttonToPurposeScreen_clicked();
};
#endif // VIEW_H
