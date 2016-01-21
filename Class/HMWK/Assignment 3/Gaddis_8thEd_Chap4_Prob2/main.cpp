/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 20, 2016, 8:35 PM
 * Purpose: Roman Numberal converter
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

/*
 * Start here
 */
int main(int argc, char** argv) {
    
    //Problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap 4 Prob2"<<endl<<endl;
    cout<<endl<<"Roman Numeral Converter"<<endl<<endl;
    
    //Initialize and declare variables
    unsigned short number;  //Number to be converted
    bool endgame=true;      //Exit program when false
    
    //Input
    cout<<"Input a number between 1 and 10: "<<endl;
    cin>>num;
    
    //Output roman numberal
    switch(number){
            case 1:{
                //For number 1
                cout<<"The Roman Numeral for 1 is i"<<endl;
            break;
            }
              
            case 2:{
                //For number 2
                cout<<"The Roman Numeral for 2 is ii"<<endl;
                break;
            }

            case 3:{
                //For number 3
                cout<<"The Roman Numeral for 3 is iii"<<endl;
                break;
            }
            
        case 4:{
            //For number 4
            cout<<"The Roman Numeral for 4 is iv"<<endl;
            break;
        }
        
        case 5:{
            //For number 4
            cout<<"The Roman Numeral for 5 is v"<<endl;
            break;
        }
        
        case 6:{
            //For number 4
            cout<<"The Roman Numeral for 6 is vi"<<endl;
            break;
        }
        
        case 7:{
            //For number 4
            cout<<"The Roman Numeral for 7 is vii"<<endl;
            break;
        }
        
        case 8:{
            //For number 4
            cout<<"The Roman Numeral for 8 is viii"<<endl;
            break;
        }
        
        case 9:{
            //For number 4
            cout<<"The Roman Numeral for 9 is ix"<<endl;
            break;
        }
        
        case 10:{
            //For number 4
            cout<<"The Roman Numeral for 4 is x"<<endl;
            break;
        }
        default:{
            cout<<"Exiting the program"<<endl;
            endgame=false;
        }
    }
            
            
    return 0;
}

