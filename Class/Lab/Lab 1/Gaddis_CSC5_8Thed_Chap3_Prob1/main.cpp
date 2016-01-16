/*
 * File: main.cpp
 * Author: Carlos Lozano
 * Created on January 15, 2016, 9:13 PM
 * Purpose: Calculate miles per gallon
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Functions

//Execution begins here
int main(int argc, char** argv) {
    
    //Delare and initialize variables
    float gallons;   //Gallons a car can hold
    float miles;     //Number of miles that can be driven on full tank
    float mpg;        //miles per gallon
    
    //Input number of miles driven and gallons in a full tank
    cout<<"How many gallons can your car hold?"<<endl;
    cin>>gallons;
    cout<<"How many miles can be driven on a full tank?"<<endl;
    cin>>miles;
    
    //calculate mpg
    mpg=miles/gallons;
    cout<<setprecision(2)<<fixed<<showpoint<<"Your car gets "<<mpg<<" MPG.";
    
    return 0;
}



