/*
 * Author:  Branden Hitt
 * Date:    September 12, 2016
 * Purpose:  Output to Windowed Program
 */

//System Libraries
#include <QApplication>
#include <QLabel>
#include <QString>
#include <string>
#include <iostream> //I/O standard
#include <fstream> //file I/O
using namespace std;
//User Libraries
#include "prob3table.h";
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char *argv[]){
    //Declare variables
    QString data("Data from your Table Here!\nFigure how to fill!\n");
    string temp;
    //Get Table
    int rows=5;
    int cols=6;
    Prob3TableInherited<int> tab("Problem3.txt",rows,cols);
    const int *naugT=tab.getTable();
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            temp=to_string(naugT[i*cols+j]);
            data+=QString::fromStdString(temp);
            data+=" ";
        }
        data+="\n";
    }
    data+="\n";
    const int *augT=tab.getAugTable();
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=cols;j++){
            temp=to_string(augT[i*(cols+1)+j]);
            data+=QString::fromStdString(temp);
            data+=" ";
        }
        data+="\n";
    }
    //Create the Window Application
    QApplication a(argc, argv);
    QLabel *label=new QLabel(data);

    //Make it visible
    label->show();

    //Exit stage right!
    return a.exec();
}
