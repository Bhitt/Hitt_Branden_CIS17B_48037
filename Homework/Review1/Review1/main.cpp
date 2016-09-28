/*
 * File:   main.cpp
 * Author: Branden Hitt
 * Created on September 6th, 2016, 8:40 PM
 *      Purpose: Review
 */
//System Libraries
#include <iostream> //I/O standard
#include <fstream> //file I/O
#include <QCoreApplication>
using namespace std;

//User Libraries
#include "Prob3Table.h"
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"Entering problem number 3"<<endl;
        int rows=5;
        int cols=6;
        Prob3TableInherited<int> tab("Problem3.txt",rows,cols);
        const int *naugT=tab.getTable();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cout<<naugT[i*cols+j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        const int *augT=tab.getAugTable();
        for(int i=0;i<=rows;i++)
        {
            for(int j=0;j<=cols;j++)
            {
                cout<<augT[i*(cols+1)+j]<<" ";
            }
            cout<<endl;
        }
        return 0;

    return a.exec();
}
