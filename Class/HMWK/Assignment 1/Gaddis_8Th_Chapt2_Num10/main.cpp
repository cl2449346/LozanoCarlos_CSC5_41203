/* 
/* Author: Carlos Lozano
 * Created on January 10, 2016, 5:56 PM
 * Purpose: Calculate Miles Per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Starts here
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int miles = 375; //Miles a car can travel before refueling
    int gallons = 15; //Volume a car can hold
    
    //Calculate miles per gallon
    int mpg = miles / gallons; //formula
    
    //Output results
    cout << "This car can get up to " << mpg << " MPG on a full tank" << endl;

    return 0;
}

