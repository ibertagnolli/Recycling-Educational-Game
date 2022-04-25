/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QLabel>
#include <QPainter>
#include <vector>

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
    /**
     * @brief View - Constructor for the view object
     * @param parent
     */
    View(QWidget *parent = nullptr);

    /**
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
    
    /**
      * @brief The signal to start the first loading screen
      */
     void firstLoadScreenStart();

     /**
       * @brief The signal to start the second loading screen
       */
     void secondLoadScreenStart();

    /**
     * @brief Sends the index of the selected item to the model.
     * TODO might send coordinates, not index
     * @param index
     */
    void sendSelectedItem(int index);

    void sendLabelPositions(std::vector<int> trashLabel,
                            std::vector<int> recycleLabel,
                            std::vector<int> OtherBin);


public slots:
    /**
     * @brief Updates the label's psoition in the UI with the provided X and X coordinates.
     * @param xPosition - X position of the top left corner of the label
     * @param yPosition - Y position of the top left corner of the label
     */
    void setLogoPosition(int xPosition, int yPosition);

    /**
     * @brief Updates the view's ballPositionsVector with the new positions.
     * Also prompts the update method so that paintevent is triggered.
     * @param ballPosVector - vector of updated coordinates for where balls should be drawn.
     */
    void updateBallPositions(std::vector<QPoint*> ballPositionsVector);

    /**
     * @brief Recieved from the model when a user has put an item into a garbage bin
     * @param correctlyIdentified
     */
    void trashInBin(bool correctlyIdentified);

    /**
     * @brief Recieved from the model when the trash items are selected
     * @param items - array of trash items
     */
    void receiveItemBar(std::vector<QImage *> items);

    /**
     * @brief Connected to Model's sendItemInfoToWindow signal. Receives the currently
     * selected trash item's type, name, and description to update the item info window.
     * @param itemType - Trash = 0, Recycle = 1, Compost = 2, Special = 3
     * TODO make sure I'm using enums correctly
     */
    void receiveItemInfo(int itemType, QString itemName, QString itemDescrip, QImage image);

    /**
     * @brief informs the view when the current screen needs to be updated
     * @param screen- index of screen to switch to
     */
    void changeScreen(int screen);

    /**
     * @brief setLabelBackground - sets the background of the
     * label to the image.
     * @param image - The item's icon
     */
    void setLabelBackground(QImage image);

private:
    /**
     * @brief Tracks the current ui
     */
    Ui::View *ui;

    /**
     * @brief itemPressed - Indicates if an item
     * is actively being pressed.
     */
    bool itemPressed;

    /**
     * @brief numBalls - number of balls to draw
     */
    int numBalls;

    /**
     * @brief ballPositionsVector - The positions to draw ball images at.
     */
    std::vector<QPoint*> ballPositionsVector;

    /**
     * @brief ballImage - The image that will have ball qualities. Drawn on loading screens.
     */
    QImage ballImage;

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
     * @brief THIS WILL BE DELETED. This method will move to the conclusion screen.
     */
    void on_conclusionButton_clicked();
    /**
     * @brief on_itemSlot0_pressed - Indicates that the first item slot is
     * selected
     */
    void on_itemSlot0_pressed();

    /**
     * @brief on_itemSlot1_pressed - Indicates that the second item slot
     * is selected
     */
    void on_itemSlot1_pressed();

    /**
     * @brief on_itemSlot2_pressed - Indicate that the third item slot
     * is selected
     */
    void on_itemSlot2_pressed();

    /**
     * @brief on_itemSlot3_pressed - Indicates that the forth item slot
     * is selected
     */
    void on_itemSlot3_pressed();

    /**
     * @brief on_itemSlot4_pressed - Indicates that the five item
     * slot is selected.
     */
    void on_itemSlot4_pressed();

    void on_waterButton_clicked();
    void on_treeButton_clicked();
    void on_gasButton_clicked();
    void on_electricityButton_clicked();
    void on_landfillButton_clicked();
    /**
     * @brief Overrides the paintevent to draw ball objects on the second loading screen.
     */
    void paintEvent(QPaintEvent *);
};
#endif // VIEW_H
