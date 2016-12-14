#include "surveylistchild.h"
#include "ui_surveylistchild.h"

SurveyListChild::SurveyListChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::SurveyListChild)
{
    ui->setupUi(this);
    qDebug() << "Survey List Constructor";
}

SurveyListChild::~SurveyListChild()
{
    delete ui;
    delete q;
    delete d;
    delete temp;
}

void SurveyListChild::setQ(QString *quest)
{
    q = quest;
}

void SurveyListChild::setD(int *bigD)
{
    d = bigD;
}

void SurveyListChild::setBox()
{
//    qDebug() << "Set Box";

    ui->scrollAreaWidget->setFixedSize(1230,1000);
    QVBoxLayout *vLayout = new QVBoxLayout();
    temp = new QPushButton *[n];
    for(int i = 0; i < n; i++)
    {
        temp[i] = new QPushButton();
    }
    for(int i=0;i<n;i++){
        temp[i]->setText(q[i]);
        temp[i]->setAttribute(Qt::WA_TranslucentBackground);
        temp[i]->setFlat(true);
        temp[i]->setCheckable(true);
        temp[i]->setFixedSize(1230,150);
        vLayout->addWidget(temp[i]);

        connect(temp[i],SIGNAL(clicked(bool)),this,SLOT(hello()));
    }
    ui->scrollAreaWidget->setLayout(vLayout);
    ui->scrollArea->setWidget(ui->scrollAreaWidget);
}

void SurveyListChild::hello()
{
    for(int i=0;i<n;i++){
        if(temp[i]->isChecked())
        {
//            qDebug() << i << d[i];
            emit goToDatabase(d[i]);
            break;
        }
    }
}

void SurveyListChild::on_goback_clicked()
{
    emit letsGoToMenu();
}
