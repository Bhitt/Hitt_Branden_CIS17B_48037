#ifndef LISTINGCHILD3_H
#define LISTINGCHILD3_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QPushButton>
#include <QTimer>
#include <QDate>
#include <QLabel>

namespace Ui {
class ListingChild3;
}

class ListingChild3 : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit ListingChild3(QWidget *parent = 0);
    ~ListingChild3();

private:
    Ui::ListingChild3 *ui;QTimer *timer;

    int unit19; //unit count of item 1...
    int unit20;
    int unit21;
    int unit22;
    int unit23;
    int unit24;
    int unit25;
    int unit26;
    int unit27;

    float total; //dollar total

    QPushButton *image; //for the expanded images
    bool isExpand;      //keeps track of any items expanded

    void addCart(); //any of the add to cart buttons were pushed
    void dateSet(); //set up the dates for delivery
signals:
    void sendCnt3(int,int,int,int,int,int,int,int,int,float); //send the user counts
    void fetch3();  //for listing setup purposes
    void page1();   //switch to page one
    void page2();   //switch to page two
    void chkOut();  //switch to checkout page
public slots:


private slots:

    void on_Expand_clicked(); //when the expand button is clicked
    void on_Expand_2_clicked();
    void on_Expand_3_clicked();
    void on_Expand_4_clicked();
    void on_Expand_5_clicked();
    void on_Expand_6_clicked();
    void on_Expand_7_clicked();
    void on_Expand_8_clicked();
    void on_Expand_9_clicked();

    void expBool(); //get expand boolean

    void addUnit19(); //add to the individual unit counts
    void addUnit20();
    void addUnit21();
    void addUnit22();
    void addUnit23();
    void addUnit24();
    void addUnit25();
    void addUnit26();
    void addUnit27();

    void on_image1button_clicked(); //when the images are clicked on the page
    void on_image2button_clicked();
    void on_image3button_clicked();
    void on_image4button_clicked();
    void on_image5button_clicked();
    void on_image6button_clicked();
    void on_image7button_clicked();
    void on_image8button_clicked();
    void on_image9button_clicked();

    void grab3(int u19, int u20, int u21, int u22, int u23, int u24, int u25, int u26, int u27, float t); //grabs the values to set on the page
    void bannerT();             //banner timeout slot
    void on_GoTo1_clicked();    //page one button clicked
    void on_GoTo2_clicked();    //page two button clicked
    void on_previous_clicked();
    void on_CheckoutButton_clicked();
};





#endif // LISTINGCHILD3_H
