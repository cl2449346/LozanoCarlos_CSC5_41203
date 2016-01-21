/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 20, 2016, 7:24 PM
 * Purpose: Output which number is large or small
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Begin
int main(int argc, char** argv) {
    
    cout<<endl<<"Solution to Gaddis 8thEd Chap4 Prob1"<<endl;
    cout<<endl<<"A Tail of Two Numbers"<<endl;
    cout<<"--------------------------------"<<endl;
    
    //Initialize variables
    int num1, num2; //Two numbers that will be entered
    
    //Input variables
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    
    //Output which number is smaller and which is larger
    cout<<endl<<"The smaller number is: "<<(num1<num2?num1:num2)<<endl;
    cout<<"The larger number is: "<<(num1>num2?num1:num2)<<endl;
    

    return 0;
}

