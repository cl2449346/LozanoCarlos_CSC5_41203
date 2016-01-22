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
    unsigned int salary=10000000;     //Salary pennies/year
    unsigned int savings=0;         //Savings pennies
    char invRate=5;                   //Investment rate %/year
    unsigned int intErnd;             //Interest earned
    char depRate=10;                  //Deposit rate %/year
    unsigned int deposit=salary*depRate/100;   //Yearly Deposit Pennies
    unsigned int savReq=salary/invRate*100;    //Savings required Pennies
    
    //Output the table heading
    cout<<"Yearly Salary        = $"<<salary<<endl;
    cout<<"The Interest rate    = "<<invRate*100.0f<<"%"<<endl;
    cout<<"Yearly deposit rate  = "<<depRate*100.0f<<"%"<<endl;
    cout<<"Retirement Savings Required = $"<<savReq/100.0f<<endl<<endl;
    cout<<"Year Year  Savings  Interest  Deposit"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Calculate the savings
    for(int y=0,year=2018;y<=50;y++,year++){
        intErnd=savings*invRate/100.0f;
        cout<<setw(4)<<y<<" "<<year<<" "<<setw(11)<<savings/100.0f
                <<setw(10)<<intErnd<<setw(9)<<deposit<<endl;
        savings*=(1+invRate*100);
        savings+=deposit;
    }
    

    return 0;
}

