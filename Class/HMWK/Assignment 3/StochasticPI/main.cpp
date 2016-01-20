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
const float PI=4*atan(1);//Universal constant 3.14159
const float MXRND=pow(2,31)-1;//Maximum rand

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //The problem to solve
    cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob12"<<endl;
    cout<<endl<<"The stocastic integration of PI"<<endl<<endl;
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables for apprxPI
    float apprxPI;    //Approximate value of PI
    unsigned int nDarts;//Number of darts
    unsigned int inCirc;//Number of darts in circle
    
    //Input the number of darts
    cout<<"Input the number darts to approximate PI"<<endl;
    cin>>nDarts;
    
    //Approximate PI/4
    for(int i=1;i<=nDarts;i++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if(x*x+y*y<1.0)inCirc++;
        }
    apprxPI=4.0*inCirc/nDarts; 
    
    //Output the results
    cout<<"The exact value of PI= "<<PI<<endl;
    cout<<"The number of darts thrown to approx PI= "<<nDarts<<endl;
    cout<<"The approx value of PI= "<<apprxPI<<endl<<endl;
    
    
    return 0;
}
