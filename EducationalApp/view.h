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

    /**
     * @brief Sends the index of the selected item to the model.
     * TODO might send coordinates, not index
     * @param index
     */
    void sendSelectedItem(int index);

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

    /**
     * @brief Recieved from the model when the trash items are selected
     * @param items - array of trash items
     */
    void receiveItemBar(std::vector<int> items);

    /**
     * @brief Connected to Model's sendItemInfoToWindow signal. Receives the currently
     * selected trash item's type, name, and description to update the item info window.
     * @param itemType - Trash = 0, Recycle = 1, Compost = 2, Special = 3
     * TODO make sure I'm using enums correctly
     */
    void receiveItemInfo(int itemType, QString itemName, QString itemDescrip);


private:
    /**
     * @brief Tracks the current ui
     */
    Ui::View *ui;

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

    /**
     * @brief THIS WILL BE DELETED. This method will move to the conclusion screen.
     */
    void on_conclusionButton_clicked();
    void on_itemSlot0_pressed();
    void on_itemSlot1_pressed();
    void on_itemSlot2_pressed();
    void on_itemSlot3_pressed();
    void on_itemSlot4_pressed();
};
#endif // VIEW_H
