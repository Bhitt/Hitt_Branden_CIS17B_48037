/* 
 * File:   main.cpp
 * Author: Branden Hitt
 * Purpose: testing map ideas
 * Created on September 27, 2016, 11:44 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //set random seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int rows=8, cols=8; //values for map size
    int cRow=0,cCol=0; //current row and col
    //Create 2d array for map
    int map[rows][cols]={};
    //initialize array contents to null
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            map[i][j]=0;
        }
    }
    //output array
    /*for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
     */
    //create initial path to end
    do{
        
        
    }while(cRow!=rows && cCol!=cols); //make path till the end
    
    //Exit Stage Right
    return 0;
}

