/*
 * File: main.cpp
 * Author: Carlos Lozano
 * Created on January 12, 2016, 8:45 PM
 * Purpose: Display Table and compare swaps
 */

//System libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Functions

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    bool x,y;
    
    //Create Heading
    cout <<"X Y !X !Y etc...." <<endl;
    
    //First Row
    x=true; y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" " <<endl;
    
    //Second Row
    x =true; y =false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" " <<endl;
    
    //Third Row
    x =false; y =false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" " <<endl;
    
    //Fourth Row
    x =true;y =true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" " <<endl;
    
    //Swap using temp
    
    //Swap using exclusive or operator
    
    
    
    
    return 0;
}

