#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCryptographicHash>

#include "lchild.h"
#include "registeruser.h"
#include "createchild.h"
#include "menuchild.h"
#include "connection.h"
#include "takechild.h"
#include "surveylistchild.h"
#include "resultchild.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setFal();
    Connection createConnection();

public slots:
    void crLgCh();  //Creates the login child
    void crRgCh();  //Creates the Register user child
    void crCrCh();  //Create the create poll child
    void crMnCh();  //Create the menu child
    void crTkCh(int);  //Create the take child
    void CrSlCh();  //Create the survey list child
    void crRsCh();  //Create the result child
    void about();

    void validate(); // validate username check
    void checkUser();// checks username and password credentials
    void sendPoll(); // Sends the user created poll
    int grabNumPoll(); // Grab the number of records from the table
    void grabPoll(int);    //Grab poll duh
    void grabList();    //Grab list duh
    void addResults(QString,int);
    void getResults();
private:
    ResultChild *result;
    bool isRslt;
    SurveyListChild *sList;
    bool isList;
    takeChild *take;
    bool isTake;
    MenuChild *menu;
    bool isMenu;
    LChild *logIn;
    bool isLogIn;
    RegisterUser *reg;
    bool isReg;
    CreateChild *create;
    bool isCreate;

    int crtPollId;
    QString *questions;
    int *id;
    Ui::MainWindow *ui;
    Connection connection;
};

#endif // MAINWINDOW_H
