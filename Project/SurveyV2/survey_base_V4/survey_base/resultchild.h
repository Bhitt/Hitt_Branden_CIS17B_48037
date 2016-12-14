#ifndef RESULTCHILD_H
#define RESULTCHILD_H

#include <QMdiSubWindow>
#include <QDebug>

namespace Ui {
class ResultChild;
}

class ResultChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit ResultChild(QWidget *parent = 0);
    ~ResultChild();

    void setP1(int,QString);
    void setP2(int,QString);
    void setP3(int,QString);
    void setQuestion(QString);
private:
    Ui::ResultChild *ui;

signals:
    void tacobell();
private slots:
    void on_gotomenu_clicked();
};

#endif // RESULTCHILD_H
