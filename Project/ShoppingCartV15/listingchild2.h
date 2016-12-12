#ifndef LISTINGCHILD2_H
#define LISTINGCHILD2_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QPushButton>
#include <QTimer>
#include <QDate>
#include <QLabel>

namespace Ui {
class ListingChild2;
}

class ListingChild2 : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit ListingChild2(QWidget *parent = 0);
    ~ListingChild2();

private:
    Ui::ListingChild2 *ui;

    QTimer *timer;
    QTimer *annoying;
    int unit10; //unit count of item 10...
    int unit11;
    int unit12;
    int unit13;
    int unit14;
    int unit15;
    int unit16;
    int unit17;
    int unit18;

    float total; //dollar total

    QPushButton *image;
    bool isExpand;
    bool isCr;

    void addCart(); //any of the add to cart buttons were pushed
    void dateSet(); //set up the dates for delivery

signals:
    void sendCnt2(int,int,int,int,int,int,int,int,int,float); //send the user counts
    void fetch2();  //for listing setup purposes
    void page1();   //switch to page 1
    void page3();   //switch to page 3
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

    void addUnit10(); //add to the individual unit counts
    void addUnit11();
    void addUnit12();
    void addUnit13();
    void addUnit14();
    void addUnit15();
    void addUnit16();
    void addUnit17();
    void addUnit18();

    void on_image1button_clicked(); //when the images are clicked on the page
    void on_image2button_clicked();
    void on_image3button_clicked();
    void on_image4button_clicked();
    void on_image5button_clicked();
    void on_image6button_clicked();
    void on_image7button_clicked();
    void on_image8button_clicked();
    void on_image9button_clicked();

    void grab2(int u10, int u11, int u12, int u13, int u14, int u15, int u16, int u17, int u18, float t); //grabs the values to set on the page
    void chCr();                    //dhsfvbwksdnrgb
    void bannerT();                 //banner timeout slot
    void on_GoTo1_clicked();        //go to page 1 button clicked
    void on_GoTo3_clicked();        //go to page 3 button clicked
    void on_previous_clicked();     //previous page button clicked
    void on_nextPage_clicked();
    void on_CheckoutButton_clicked();
    void on_UnitCount10_valueChanged(int arg1);
    void on_UnitCount11_valueChanged(int arg1);
    void on_UnitCount12_valueChanged(int arg1);
    void on_UnitCount13_valueChanged(int arg1);
    void on_UnitCount14_valueChanged(int arg1);
    void on_UnitCount15_valueChanged(int arg1);
    void on_UnitCount16_valueChanged(int arg1);
    void on_UnitCount17_valueChanged(int arg1);
    void on_UnitCount18_valueChanged(int arg1);
};

#endif // LISTINGCHILD2_H
