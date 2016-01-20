/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 16, 2016, 11:10 PM
 * Purpose: interest earned
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User libraries
//global constants

//Starts here
int main(int argc, char** argv) {
    
    //initialize and declare variables
    float rate;         //interest rate
    float times; //times compounded
    float prcnpl;       //Principal
    float intrst;       //interest
    float savings;      //Amount in savings
    
    //inputs
    cout<<"Enter your interest rate: "<<endl;
    cin>>rate;
    cout<<"Enter how many payments you are making"<<endl;
    cin>>times;
    cout<<"Enter the principal amount"<<endl;
    cin>>prcnpl;
    
    //calculate interest
    float irate=rate/100;            //convert interest rate to percent
    float temp=1+(irate/times);      //calc
    float temp2=pow(temp,times);     //
    savings=prcnpl*temp2;
    intrst=savings-prcnpl;
    //cout<<setprecision(2)<<fixed<<showpoint<<total<<endl<<intrst<<endl;
    
    //output results
    cout<<"---------------------"<<endl<<"-------------------"<<endl;
    cout<<"Interest Rate"<<setw(5)<<setprecision(2)<<fixed<<showpoint
        <<rate<<endl;
    cout<<"Times Compounded"<<setw(5)<<times<<endl;
    cout<<"Principal"<<setw(5)<<setprecision(2)<<fixed<<showpoint;
    cout<<"$"<<prcnpl<<endl;
    cout<<"Interest"<<setw(5)<<setprecision(2)<<fixed<<showpoint;
    cout<<"$"<<intrst<<endl;
    cout<<"Amount in savings"<<setw(5)<<setprecision(2)<<fixed<<showpoint;
    cout<<"$"<<savings<<endl;
    

    return 0;
}

