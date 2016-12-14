#ifndef SURVEYLISTCHILD_H
#define SURVEYLISTCHILD_H

#include <QMdiSubWindow>
#include <QPushButton>
#include <QBoxLayout>
#include <QVector>
#include <QDebug>
#include <QStackedWidget>

namespace Ui {
class SurveyListChild;
}

class SurveyListChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit SurveyListChild(QWidget *parent = 0);
    ~SurveyListChild();
    void setN(int num) {n = num;}
    void setQ(QString *);
    void setD(int *);
    QPushButton **temp;
public slots:
    void setBox();
    void hello();

signals:
    void goToDatabase(int);
    void letsGoToMenu();
private slots:
    void on_goback_clicked();

private:
    Ui::SurveyListChild *ui;
    QString *q;
    int *d;
    int n;
};

#endif // SURVEYLISTCHILD_H
