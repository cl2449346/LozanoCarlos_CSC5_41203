/*
 * File: main.cpp
 * Author: Carlos Lozano
 * Created on January 12, 2016, 9:10 PM
 * Purpose: Solve the candy bar problem
 */

//System libraries
#include <iostream> //IO
#include <cstdlib>  //Random function
#include <ctime>    //Set the seed with wime
using namespace std;

//User Libraries

//Global Functions

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //declare and initialize variables
    unsigned char ageyr=rand()%61 +18; //Range of 18 - 78
    unsigned char wtlbs=rand()%161 +90; // [90,250]
    unsigned char htins=rand()%31 +54; // [54,84]
    bool          male=rand()%2; //[0,1] if 1 then male
    unsigned char chocbar=230; //230 calories
    unsigned char nChocbar;
    float         bmr;
        
    //Calculate or map inputs to outputs
    bmr=male?
        66 +6.3f*wtlbs +12.9f*htins +6.8f*ageyr:
        655 +4.3f*wtlbs +4.7f*htins +4.7f*ageyr;
    nChocbar =bmr/chocbar;
    
    //Output the results
    cout <<"The random age = " <<static_cast<int>(ageyr) <<"yrs" <<endl;
    cout <<"The random wt  = " <<static_cast<int>(wtlbs) <<"lbs" <<endl;
    cout <<"The random ht  = " <<static_cast<int>(htins) <<"ins" <<endl;
    cout <<"The random sex = " <<(male?"male":"Female") <<endl;
    cout <<"The BMR        = " <<bmr <<"cals"  <<endl;
    cout<<"The number of chocolate bars = " <<static_cast<int>(nChocbar) <<endl;
            

    return 0;
}

