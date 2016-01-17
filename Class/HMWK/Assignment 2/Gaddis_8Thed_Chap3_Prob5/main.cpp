/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 16, 2016, 8:27 PM
 * Purpose: Calculate male/female percentage
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const unsigned char CNVPCT=100;


//Starts here
int main(int argc, char** argv) {
    
    //Declare and initialize
    int nMales, nFmales;//Number of males and females
    float perM, perF;//percentage of males and females
    
    //Input number of males and females
    cout<<"How many males in the class?"<<endl;
    cin>>nMales;
    cout<<"How many females in the class?"<<endl;
    cin>>nFmales;
    
    //calculate total students
    float total = nMales+nFmales;
    cout<<"There are "<<total<<" students in the class."<<endl;
   
    //Calculate/output percentage of males
    perM=(nMales/total)*CNVPCT;
    cout<<"Males make up "<<setprecision(1)<<fixed;
        cout<<showpoint<<perM<<"% of the class"<<endl;
    
    //Calculate/output percentage of females
    perF=(nFmales/total)*CNVPCT;
    cout<<"While females make up "<<setprecision(1)<<fixed;
        cout<<showpoint<<perF<<"% of the class"<<endl;
    
    

    return 0;
}

