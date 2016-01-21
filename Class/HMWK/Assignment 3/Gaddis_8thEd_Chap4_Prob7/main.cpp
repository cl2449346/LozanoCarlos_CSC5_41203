/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 20, 2016, 4:06 PM
 * Purpose:Calculate time
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Starts here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int seconds;   //Number of seconds
    unsigned int minutes;   //Number of minutes
    unsigned int hours;     //Number of hours
    unsigned int days;      //Number of days
    
    //Input number of seconds    
    cin>>seconds;
    
    //Calculate time
    minutes=seconds/60; //Minutes
    hours=seconds/3600; //Hours
    days=seconds/86400; //Days
    
    //Output seconds, minutes, hours or days
    if(seconds>=60&&seconds<3600)//output minutes
        {
            cout<<"You entered: "<<minutes<<" Minutes and "<<seconds%60
                    <<" Seconds"<<endl;
        }
        else if(seconds>=3600&&seconds<86400)//output minutes
        {
            cout<<"You entered: "<<hours<<" Hours and "<<minutes
                    <<" Minutes and "<<seconds%60<<" Seconds"<<endl;
        }
        else if(seconds>=86400)
        {
            cout<<"You entered: "<<days<<" Days and "<<hours<<" Hours and "<<
                    minutes<<" Minutes and "<<seconds%60<<" Seconds"<<endl;
        }
        else{
            cout<<"You only entered "<<seconds<<" seconds"<<endl;
        }

    return 0;
}

