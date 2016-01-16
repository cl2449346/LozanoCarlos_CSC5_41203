/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 16, 2016, 12:54 AM
 * Purpose: Test Average
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Functions

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables
    float test1, test2, test3, test4, test5; //Five tests
    float avg; //Average
    
    //Input test scores
        cout<<"Enter your test scores"<<endl;
        cout<<"First test"<<endl;
        cin>>test1;
        cout<<"Second test"<<endl;
        cin>>test2;
        cout<<"Third test"<<endl;
        cin>>test3;
        cout<<"Fourth test"<<endl;
        cin>>test4;
        cout<<"Fifth test"<<endl;
        cin>>test5;
    
        
    //Calculate the average
    float sum=test1+test2+test3+test4+test5;
    avg=sum/5;
    
    //output result
    cout<<"----------------------"<<endl;
    cout<<"Your average test score is: "<<setprecision(1)<<fixed
            <<showpoint<<avg;
    

    return 0;
}

