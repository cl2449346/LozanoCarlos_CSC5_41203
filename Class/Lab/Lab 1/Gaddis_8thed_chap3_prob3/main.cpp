/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 16, 2016, 12:54 AM
 * Purpose: Test Average
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries
//Global Functions

//Execution Begins Here
int main(int argc, char** argv) {
    
    srand(static_cast <unsigned int>(time(0)));
    
    //Declare variables
    float score; //Five tests
    float avg; //Average
    int nTests=1;//number of tests
    
    //Input test scores
    do
    {
        float sum;
        cout<<"Enter your scores for test "<<nTests<<" (0-10)"<<endl;
        cin>>score;    
        sum += score;
        
        //calculate average
        if(score>10)
            {
                cout<<"Invalid Score Run Again"<<endl;
                break;//Exit
            }
                else {
                nTests++;//Continue and increase number of test
            }           
        
        avg=sum/5; //Calculate average
       
        
        
                
    }while(nTests<=5);
    {cout<<"----------------------"<<endl;
    cout<<"Your average test score is: "<<setprecision(1)<<fixed
            <<showpoint<<avg;
        }
    

    return 0;
}

