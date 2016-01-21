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
        cout<<"Type 2 to display Gaddis 8thEd Chap 3 "<<endl;
        cout<<"Type anything else to exit"<<endl;
        cin>>nSoltn;
        cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
        
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8thed chap3 prob12"<<endl;
                cout<<endl<<endl<<"The approximation of PI"<<endl;
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
                cout<<"The number of terms it took to approx PI="<<nTerms<<endl;
                cout<<"The approx value of PI= "<<apprxPI<<endl<<endl;
            }break;
        
            case 2:{
                cout<<endl<<"Solution to Gaddis 8thEd Chap 4 Prob7"<<endl<<endl;
                cout<<endl<<"The Calculation of time"<<endl<<endl;
                //Declare and initialize variables
                unsigned int seconds;   //Number of seconds
                unsigned int minutes;   //Number of minutes
                unsigned int hours;     //Number of hours
                unsigned int days;      //Number of days

                //Input number of seconds 
                cout<<"Enter an amount of seconds"<<endl;
                cin>>seconds;

                //Calculate time
                minutes=seconds/60; //Minutes
                hours=seconds/3600; //Hours
                days=seconds/86400; //Days

                //Output seconds, minutes, hours or days
                if(seconds>=60&&seconds<3600)//output minutes
                    {
                        cout<<"You entered: "<<minutes<<" Minutes and "<<seconds%60
                                <<" Seconds"<<endl;
                    }
                    else if(seconds>=3600&&seconds<86400)//output minutes
                    {
                        cout<<"You entered: "<<hours<<" Hours and "<<minutes
                                <<" Minutes and "<<seconds%60<<" Seconds"<<endl;
                    }
                    else if(seconds>=86400)
                    {
                        cout<<"You entered: "<<days<<" Days and "<<hours<<" Hours and "<<
                                minutes<<" Minutes and "<<seconds%60<<" Seconds"<<endl;
                    }
                    else{
                        cout<<"You only entered "<<seconds<<" seconds"<<endl;
                        break;}
                }
            default:{
                cout<<"Exiting the program"<<endl;
                endgame=false;
            }
    }
    }while(endgame);
    

            return 0;
}

