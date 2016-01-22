/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 21, 2016, 8:06 PM
 * Purpose: Retirement
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Format
using namespace std;

//User libraries
//Global constants
//function prototypes

//Start here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Retirement=Salary/InvRate + Deposits"<<endl;
        
    //initialize variables
    double salary=1e5;      //Salary $/year
    double savings=0.0;     //Savings $'s
    double invRate=0.05;    //Investment rate %/year
    double intErnd;          //Interest earned
    double depRate=0.10;    //Deposit rate %/year
    double deposit=salary*depRate;   //Yearly Deposit $
    double savReq=salary/invRate;    //Savings required $
    
    //Output the table heading
    cout<<"Yearly Salary        = $"<<salary<<endl;
    cout<<"The Interest rate    = "<<invRate*100<<"%"<<endl;
    cout<<"Yearly deposit rate  = "<<depRate*100<<"%"<<endl;
    cout<<"Retirement Savings Required = $"<<savReq<<endl<<endl;
    cout<<"Year Year Savings  Interest  Deposit"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Calculate the savings
    for(int y=0,year=2018;y<=50;y++,year++){
        intErnd=savings*invRate;
        cout<<setw(4)<<y<<" "<<year<<setw(11)<<savings
                <<setw(10)<<intErnd<<setw(9)<<deposit;
        
    }
    

    return 0;
}

