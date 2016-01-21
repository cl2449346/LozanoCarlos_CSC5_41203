/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 20, 2016, 9:47 PM
 * Purpose: Magic Dates
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Start here
int main(int argc, char** argv) {
    
    //Initialize and declare variables
    int month, day, year, magcDt;   //The date and magic date
    
    //Input the date
    cout<<"Is your date magic?"<<endl;
    cout<<"Enter a month in numeric from (m)"<<endl;
    cin>>month;
    cout<<"Enter a day"<<endl;
    cin>>day;
    cout<<"Enter a two digit year"<<endl;
    cin>>year;
    
    //calculate magic date
    magcDt=month*day;
    if(magcDt=year){
        cout<<"This date is magic"<<endl;
    }
    else(cout<<"this date is not magic");

    return 0;
}

