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
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constant

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //The problem to solve
    cout<<endl<<"Investigate the random number generator"<<endl<<endl;
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables for apprxPI
    unsigned int nRand;     //Number of random function calls
    unsigned int min=rand();//Initialize the min value
    unsigned int max=rand();//Initialize the max value
    
    //Input the number random calls to rand
    cout<<"Input the number of random calls"<<endl;
    cin>>nRand;
    
    //Approximate PI/4
    for(int i=1;i<=nRand;i++){
        unsigned int r=rand();
        if(r>max)max=r;
        if(r<min)min=r;
        }
    
    //Output the results
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"The min value found = "<<min<<endl;
    cout<<"The max value found = "<<max<<endl<<endl;
    
    
    return 0;
}
