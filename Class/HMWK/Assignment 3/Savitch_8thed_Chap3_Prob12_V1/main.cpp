/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 19, 2016, 8:32 PM
 * Purpose: Appproximate Pi
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constant
const float PI=4*atan(1);//Universal constant 3.14159

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //The problem to solve
    cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob12"<<endl;
    cout<<endl<<"The finite sum for PI"<<endl<<endl;
    
    //Declare and initialize variables for apprxPI
    float apprxPI=1;    //Approximate value of PI
    unsigned int nTerms;//Number of terms
    char sign=-1;       //Alt. Sign of the PI sequence
    
    //Input the number of terms
    cout<<"Input the number of terms to approximate PI"<<endl;
    cin>>nTerms;
    
    //Approximate PI/4
    for(int i=2,j=3;i<=nTerms;i++,j+=2){
        apprxPI+=(sign/static_cast<float>(j));
        sign*=-1;
    }
    apprxPI*=4; //Multiply by 4 once to approximate PI
    
    //Output the results
    cout<<"The exact value of PI= "<<PI<<endl;
    cout<<"The number of terms it took to approx PI= "<<nTerms<<endl;
    cout<<"The approx value of PI= "<<apprxPI<<endl<<endl;
    
    
    return 0;
}

