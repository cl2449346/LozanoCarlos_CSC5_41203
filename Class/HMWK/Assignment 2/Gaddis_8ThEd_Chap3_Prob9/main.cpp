/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 16, 2016, 9:30 PM
 * Purpose: Calculate calories
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants

//Starts here
int main(int argc, char** argv) {
    
    //Initialize and declare variables
    unsigned int bag=30;    //Number of cookies in a bag
    unsigned int srving=10; //cookies in a serving
    unsigned int cal=300;   //Calories in a serving
    unsigned int cookies;   //Number of cookies you ate
    unsigned int calper;    //calories per cookies
    
    //inputs
    cout<<"How many cookies did you have (No Lying)"<<endl;
    cin>>cookies;
    
    //calculate the calories
    int ttlcky,extra;    //total cookies and extra cookies
    ttlcky=(cookies/srving);
    //cout<<ttlcky<<endl;         //Test total
    extra=bag-cookies;       //Number of Extra cookies
    calper=cal/srving;       //calories per cookie
    //cout<<calper<<endl<<extra<<endl;  //test calper and extra
    
    //output number of calories
    int ttlCal,extcal; //total calories and calories of extra cookies
    ttlCal=ttlcky*cal;
    extcal=extra*calper;
    cout<<"You had "<<ttlCal+extcal <<" total calories"<<endl;
           

    return 0;
}

