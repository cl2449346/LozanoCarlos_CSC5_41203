/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 19, 2016, 8:32 PM
 * Purpose: menu
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
    //Declare and initialize variables
    unsigned short nSoltn;  //Problem solution to display
    bool endgame=true;      //Exit program when false
    
    //Menu to display solution
    do{
        //Input problem to display//menu
        cout<<"Assignment 3 problem set"<<endl;
        cout<<"Type 1 to display Savitch 8thEd Chap3 Prob12"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8thed chap3 prob12"<<endl<<endl;
                cout<<endl<<"The approximation of PI"<<endl;
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
                break;
            }
            default:{
                cout<<"Exiting the program"<<endl;
                reDsply=false;
            }
        }
    }

    return 0;
}

