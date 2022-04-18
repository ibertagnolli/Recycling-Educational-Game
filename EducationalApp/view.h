/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class View; }
QT_END_NAMESPACE

/**
 * @brief The View class - This class manages all of the visual
 * aspects of the game.
 */
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

    /**
     * @brief Informs the model when the mouse has been released
     * @param position of the mouse when released
     */
    void mouseReleased(QPointF position);
    
    // First Loading Screen Signals
     void firstLoadScreenStart();

private:
    /**
     * @brief Tracks the current ui
     */
    Ui::View *ui;
    /**
     * @brief Tracks when the mouse is moved
     * @param event
     */
    void mousePressEvent(QMouseEvent *event);

    /**
     * @brief Tracks when the mouse is released
     * @param event
     */
    void mouseReleaseEvent(QMouseEvent *event);

    /**
     * @brief Tracks when the mouse is moved
     * @param event
     */
    void mouseMoveEvent(QMouseEvent *event);

public slots:
    /**
     * @brief Updates the label's psoition in the UI with the provided X and X coordinates.
     * @param xPosition - X position of the top left corner of the label
     * @param yPosition - Y position of the top left corner of the label
     */
    void setLogoPosition(int xPosition, int yPosition);

    /**
     * @brief Recieved from the model when a user has put an item into a garbage bin
     * @param correctlyIdentified
     */
    void trashInBin(bool correctlyIdentified);

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

    /**
     * @brief This method will be deleted. Moves from gameScreen to loadingScreen1.
     */
    void on_buttonToLoad1_clicked();

    /**
     * @brief This method will be deleted. Moves from gameScreen to loadingScreen2.
     */
    void on_buttonToLoad2_clicked();
};
#endif // VIEW_H
