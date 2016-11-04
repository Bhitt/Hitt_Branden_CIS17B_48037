#ifndef LISTINGCHILD1_H
#define LISTINGCHILD1_H

#include <QMainWindow>
#include <QMdiSubWindow>

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

    int total;

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

    void AddUnit1();
};

#endif // LISTINGCHILD1_H
