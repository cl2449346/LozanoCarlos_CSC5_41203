/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 19, 2016, 6:22 PM
 * Purpose: Fibonacci sequence
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User libraries
//Global Constants
//Function prototypes

//Starts here
int main(int argc, char** argv) {
    //Problem to solve
    cout<<endl<<"The finite sum for e^x"<<endl<<endl;
    
    //Declare and initialize variables for etox
    const unsigned char nTerms=13;
    float etox=1,x; //e^x
    
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(int n=1;n<=nTerms;n++){
        //Declare and initialize variables
        unsigned int factN=1;//N and N
        
        //Calculate the factorial
        for(int i=1;i<=n;i++){
            factN*=1;
        }
        
        //Calculate e^x with the above factorial
        etox+pow(x,n)/factN;
    }
    
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

