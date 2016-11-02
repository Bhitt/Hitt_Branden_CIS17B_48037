#ifndef LISTINGCHILD1_H
#define LISTINGCHILD1_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QPushButton>

namespace Ui {
class ListingChild1;
}

class ListingChild1 : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit ListingChild1(QWidget *parent = 0);
    ~ListingChild1();

private:
    Ui::ListingChild1 *ui;

    int unit1;
    int unit2;
    int unit3;
    int unit4;
    int unit5;
    int unit6;
    int unit7;
    int unit8;
    int unit9;

    float total;

    QPushButton *image;
    bool isExpand;

public slots:
    void on_Expand_clicked();
    void on_Expand_2_clicked();
    void on_Expand_3_clicked();
    void on_Expand_4_clicked();
    void on_Expand_5_clicked();
    void on_Expand_6_clicked();
    void on_Expand_7_clicked();
    void on_Expand_8_clicked();
    void on_Expand_9_clicked();

    void expBool();

    void addUnit1();
    void addUnit2();
    void addUnit3();
    void addUnit4();
    void addUnit5();
    void addUnit6();
    void addUnit7();
    void addUnit8();
    void addUnit9();
private slots:
    void on_image1button_clicked();
    void on_image2button_clicked();
    void on_image3button_clicked();
    void on_image4button_clicked();
    void on_image5button_clicked();
    void on_image6button_clicked();
    void on_image7button_clicked();
    void on_image8button_clicked();
    void on_image9button_clicked();
};

#endif // LISTINGCHILD1_H
