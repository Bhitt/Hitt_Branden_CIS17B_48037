#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    isLogIn = false;
    isReg = false;
    isCreate = false;
    isMenu = false;
    isTake = false;
    isList = false;
    isRslt = false;

    crLgCh();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::crRsCh()
{
    setFal();
    result = new ResultChild(ui->mdiArea);
    isRslt = true;
    result->setAttribute(Qt::WA_DeleteOnClose);
    result->setWindowFlags(Qt::FramelessWindowHint);
    result->show();
    result->move(0,0);

    this->statusBar()->showMessage(tr("Results"));
    connect(result,SIGNAL(tacobell()),this,SLOT(crMnCh()));
    getResults();
}

void MainWindow::crTkCh(int id)
{
    crtPollId = id;
    setFal();
    take = new takeChild(ui->mdiArea);
    isTake = true;
    take->setAttribute(Qt::WA_DeleteOnClose);
    take->setWindowFlags(Qt::FramelessWindowHint);
    take->show();
    take->move(0,0);

    this->statusBar()->showMessage(tr("Take A Survey"));

    connect(take,SIGNAL(choice(QString,int)),this,SLOT(addResults(QString,int)));
    connect(take,SIGNAL(goToResults()),this,SLOT(crRsCh()));

    grabPoll(id); //This grabs the first poll in the database
//    qDebug() <<"Terry Crews Chicken is done";
}

void MainWindow::CrSlCh()
{
    qDebug() << "Survey List Child";
    setFal();
    sList = new SurveyListChild(ui->mdiArea);
    isList = true;
    sList->setAttribute(Qt::WA_DeleteOnClose);
    sList->setWindowFlags(Qt::FramelessWindowHint);
    sList->show();
    sList->move(0,0);

    this->statusBar()->showMessage(tr("Choose A Survey"));

    connect(sList,SIGNAL(goToDatabase(int)),this,SLOT(crTkCh(int)));
    connect(sList,SIGNAL(letsGoToMenu()),this,SLOT(crMnCh()));

    grabList();
    sList->setBox();
}

void MainWindow::crCrCh()
{
    setFal();
    create = new CreateChild(ui->mdiArea);
    isCreate = true;
    create->setAttribute(Qt::WA_DeleteOnClose);
    create->setWindowFlags(Qt::FramelessWindowHint);
    create->show();
    create->move(0,0);

    this->statusBar()->showMessage(tr("Create Your Own Survey"));

    connect(create,SIGNAL(crunchwrapsupreme()),this,SLOT(crMnCh()));
    connect(create,SIGNAL(goToSendPoll()),this,SLOT(sendPoll()));
}

void MainWindow::crLgCh()
{
//    qDebug() << "check";
    setFal();
    logIn = new LChild(ui->mdiArea);
    isLogIn = true;
    logIn->setAttribute(Qt::WA_DeleteOnClose);
    logIn->setWindowFlags(Qt::FramelessWindowHint);
    logIn->show();
    logIn->move(0,0);

    this->statusBar()->showMessage(tr("Log Into Your Account"));

    connect(logIn->log->reg,SIGNAL(clicked(bool)),this,SLOT(crRgCh()));
    connect(logIn->log->close,SIGNAL(clicked(bool)),this,SLOT(close()));

    connect(logIn->log,SIGNAL(goToMenu()),this,SLOT(crMnCh()));
    connect(logIn->log,SIGNAL(goToCheckUser()),this,SLOT(checkUser()));
//    qDebug() << "done with creating login";
}

void MainWindow::crRgCh()
{
    setFal();
    reg = new RegisterUser(ui->mdiArea);
    isReg = true;
    reg->setAttribute(Qt::WA_DeleteOnClose);
    reg->setWindowFlags(Qt::FramelessWindowHint);
    reg->show();
    reg->move(0,0);

    this->statusBar()->showMessage(tr("Register A New User"));
    connect(reg->back,SIGNAL(clicked(bool)),this,SLOT(crLgCh()));
    connect(reg->submit,SIGNAL(clicked(bool)),this,SLOT(validate()));
}

void MainWindow::crMnCh()
{
    setFal();
    menu = new MenuChild(ui->mdiArea);
    isMenu = true;
    menu->setAttribute(Qt::WA_DeleteOnClose);
    menu->setWindowFlags(Qt::FramelessWindowHint);
    menu->show();
    menu->move(0,0);

    this->statusBar()->showMessage(tr("Menu Options"));
    connect(menu,SIGNAL(goToCreate()),this,SLOT(crCrCh()));
    connect(menu,SIGNAL(goToNum()),this,SLOT(CrSlCh()));
}

void MainWindow::about()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::setFal()
{
//    qDebug() << "Set False";
    if(isLogIn)
    {
//        qDebug() << "Delete log In child";
        logIn->close();
        isLogIn = false;
//        qDebug() << "Login worked";
    }
    if(isReg)
    {
//        qDebug() << "Delete Register child";
        reg->close();
        isReg = false;
//        qDebug() << "this worked";
    }
    if(isCreate)
    {
//        qDebug()<<"Delete the create child";
        create->close();
        isCreate = false;
//        qDebug() << "Create worked";
    }
    if(isMenu)
    {
        menu->close();
        isMenu = false;
    }
    if(isTake)
    {
        take->close();
        isTake = false;
    }
    if(isList)
    {
        sList->close();
        isList = false;
    }
    if(isRslt)
    {
        result->close();
        isRslt = false;
    }
}

Connection MainWindow::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("209.129.8.7");
        db.setDatabaseName("48037");
        db.setUserName("48037");
        db.setPassword("48037cis17b");
        Connection connection;
        connection.db = db;
        if (!db.open()) {
            qDebug() << "Database error occurred";
            connection.connected = false;
            return connection;
        }
        connection.connected = true;

        return connection;
}

void MainWindow::checkUser()
{
    bool found = false;

    QByteArray hashed;
    hashed.append(logIn->log->getOne());
    hashed = QCryptographicHash::hash(hashed,QCryptographicHash::Sha1);
    qDebug() << "hashed:" << hashed;
    if(!connection.connected) connection = createConnection();
    if ( !connection.connected ){
            logIn->log->setEChck(tr("No connection found."));
            //exit(1);
    }else{
        qDebug() << "Connected!";
        QSqlQuery query;
        query.exec("SELECT username, password FROM v_survey_users");
        while (query.next()) {
            QString uName = query.value(0).toString();
            if(uName == logIn->log->getTwo())
            {
                qDebug() << query.value(1).toByteArray();
                if(query.value(1).toByteArray() == hashed) found = true;
                break;
            }
        }

        if(found)
        {
            qDebug() << "Welcome Back," << query.value(0).toString();
            crMnCh();
        }
        else logIn->log->setEChck(tr("The username and/or password that you<br>entered did not match any of our records."));

        //connection.db.close();
    }
}

void MainWindow::validate()
{
    bool found = false;

    QByteArray hashed;
    hashed.append(reg->getOne());
    hashed = QCryptographicHash::hash(hashed,QCryptographicHash::Sha1);
    qDebug() << "hashed:" << hashed;
    if(!connection.connected) connection = createConnection();
    if ( !connection.connected ){
        reg->setEChck(tr("No connection found."));
            //exit(1);
    }else{
        //qDebug() << "Connected!";
        QSqlQuery query;
        query.exec("SELECT username, password FROM v_survey_users");
        while (query.next()) {
            QString uName = query.value(0).toString();
            if(uName == reg->getTwo())
            {
                found = true;
                break;
            }
            //else found = false;
        }

        if(!found)
        {
            query.prepare("INSERT INTO v_survey_users(username,password) VALUE(?,?)");
            query.addBindValue(reg->getTwo());
            query.addBindValue(hashed);
            query.exec();
        }
        else reg->setEChck(tr("The username you entered is already taken."));

        //connection.db.close();
    }
}

int MainWindow::grabNumPoll()
{
    if(!connection.connected) connection = createConnection();
    if(!connection.connected)
    {
        //Set the error connection thing here
    }
    else
    {
       qDebug() << "Connected";
       QSqlQuery query;
       query.exec("SELECT id FROM v_survey_info");
       int num = query.size();
       qDebug() << num;
       return num;
    }
    return 0;
}

void MainWindow::grabPoll(int id)
{
    if(!connection.connected) connection = createConnection();
    if(!connection.connected)
    {
        //Set the error connection thing here
    }
    else
    {
        qDebug() << "Connected";
        QSqlQuery query;
        query.exec("SELECT id,survey_question,survey_answer1q,survey_answer2q,survey_answer3q FROM v_survey_info");
        while(query.next())
        {
            if(id == query.value(0).toInt())
            {
                qDebug() << id;
                QString question = query.value(1).toString();
                QString ans1 = query.value(2).toString();
                QString ans2 = query.value(3).toString();
                QString ans3 = query.value(4).toString();

                qDebug() << question;
                qDebug() << ans1;
                qDebug() << ans2;
                qDebug() << ans3;

                take->setQuest(question);
                take->setAns1(ans1);
                take->setAns2(ans2);
                take->setAns3(ans3);
                break;
            }
        }
    }
//    qDebug() << "Waterpolo is over";
}

void MainWindow::sendPoll()
{
    if(!connection.connected) connection = createConnection();
    if(!connection.connected)
    {
        //Set the error connection thing here
    }
    else
    {
        qDebug() << "Connected";
        QSqlQuery query;

        query.prepare("INSERT INTO v_survey_info(survey_question,survey_answer1q,survey_answer2q,survey_answer3q) VALUE(?,?,?,?)");
        query.addBindValue(create->getQuestion());
        query.addBindValue(create->getAns1());
        query.addBindValue(create->getAns2());
        query.addBindValue(create->getAns3());
        query.exec();
    }
}

void MainWindow::grabList()
{
    if(!connection.connected) connection = createConnection();
    QSqlQuery query;

    query.exec("SELECT id, survey_question FROM v_survey_info");
    int num = grabNumPoll();
    id = new int[num];
    questions = new QString[num];

    int i = 0;
    while(query.next())
    {
        id[i] = query.value(0).toInt();
        questions[i++] = query.value(1).toString();
    }

    sList->setN(num);
    sList->setQ(questions);
    sList->setD(id);

}

void MainWindow::addResults(QString text, int num)
{
    if(!connection.connected) connection = createConnection();
    if(!connection.connected)
    {
        //Set the error connection thing here
    }
    else
    {
        qDebug() << "Add to result";
        QSqlQuery query;
        query.exec("SELECT id,survey_question,survey_answer1,survey_answer2,survey_answer3 FROM v_survey_info");

        while(query.next())
        {
            if(text == query.value(1).toString())
            {
                if(num == 1)
                {
                    int number = query.value(2).toInt();
                    number+=1;
                    qDebug() << number;
                    QSqlQuery query2;
                    query2.prepare("UPDATE v_survey_info SET survey_answer1=:25 WHERE id=:rowid");
                    query2.bindValue(":rowid",query.value(0).toInt());
                    query2.bindValue(":25",number);
                    query2.exec();
                    break;
                }
                else if(num == 2)
                {
                    int number = query.value(3).toInt();
                    number+=1;
                    qDebug() << number;
                    QSqlQuery query2;
                    query2.prepare("UPDATE v_survey_info SET survey_answer2=:25 WHERE id=:rowid");
                    query2.bindValue(":rowid",query.value(0).toInt());
                    query2.bindValue(":25",number);
                    query2.exec();
                    break;
                }
                else if(num == 3)
                {
                    int number = query.value(4).toInt();
                    number+=1;
                    qDebug() << number;
                    QSqlQuery query2;
                    query2.prepare("UPDATE v_survey_info SET survey_answer3=:25 WHERE id=:rowid");
                    query2.bindValue(":rowid",query.value(0).toInt());
                    query2.bindValue(":25",number);
                    query2.exec();
                    break;
                }
            }
        }
    }

}

void MainWindow::getResults()
{
    if(!connection.connected) connection = createConnection();
    if(!connection.connected)
    {
        //Set the error connection thing here
    }
    else
    {
       qDebug() << "Connected";
       QSqlQuery query;
       query.exec("SELECT id, survey_question, survey_answer1q, survey_answer2q, survey_answer3q, survey_answer1, survey_answer2, survey_answer3 FROM v_survey_info");
       while(query.next())
       {
           if(crtPollId == query.value(0).toInt())
           {
               qDebug() << "In the if";
               result->setQuestion(query.value(1).toString());
               result->setP1(query.value(5).toInt(),query.value(2).toString());
               result->setP2(query.value(6).toInt(),query.value(3).toString());
               result->setP3(query.value(7).toInt(),query.value(4).toString());
               break;
           }
       }

    }
}
