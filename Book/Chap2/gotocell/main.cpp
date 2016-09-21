#include <QApplication>
#include <QGui>
#include <QDialog>

#include "ui_gotocelldialog.h"

int main(int argc, char *arg[]){
    QApplication app(argc,argv);

    Ui::GoToCellDialog ui;
    QDialog *dialog = new QDialog;
    ui.setupUi(dialog);
    dialog->show();

    return app.exec();
}
