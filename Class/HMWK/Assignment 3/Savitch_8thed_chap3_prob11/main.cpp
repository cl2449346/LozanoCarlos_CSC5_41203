/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 19, 2016, 6:22 PM
 * Purpose: Fibonacci sequence
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User libraries
//Global Constants
//Function prototypes

//Starts here
int main(int argc, char** argv) {
    //Problem to solve
    
    
    //Declare variables
    unsigned int n, factN=1;//N and N!
    
    //input data
    cout<<"Enter the number you would like to compute the factorial n!"<<endl;
    cout<<"The limit of this calculation is <=13"<<endl;
    cin>>n;
    
    //Calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=i;
    }
    
    //Output the results
    cout<<n<<"!="<<factN<<endl;
    
    return 0;
}

