/* Author: Carlos Lozano
 * Created on January 13, 5:32 PM
 * Purpose: Energy Drink Survey
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100; //Convert to percent

//Function Prototypes

//Starts here
int main(int argc, char** argv) {
    
    //Initialize and declaration of variables
    unsigned short ncustmr=165; //Number of Customers surveyed
    unsigned char  edrink=15;   //Percentage of energy drinkers
    unsigned char  cdrink=58;   //Percentage of citrus energy drinkers
    unsigned short nedrnk,ncdrnk;//Number of energy and citrus drinkers
    
    //Calculate the number of drinkers
    nedrnk =ncustmr *edrink /PERCENT;
    ncdrnk =nedrnk *cdrink /PERCENT;
    
    //Output results
    cout <<"Number of customers surveyed = "<<ncustmr <<endl;
    cout<<"Percentage of energy drinkers = "<<static_cast<int>(edrink)<<"%"<<endl;
    cout<<"Percentage of citrus drinkers = "<<static_cast<int>(cdrink)<<"%"<<endl;
    cout <<"Energy drinkers = "<<nedrnk<<endl;
    cout <<"Citrus energy drinkers = "<<ncdrnk<<endl;
    
    
    return 0;
}

