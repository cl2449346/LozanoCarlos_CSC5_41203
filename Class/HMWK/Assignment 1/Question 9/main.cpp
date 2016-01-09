/* Author: Carlos Lozano
 * Created on January 8, 2016, 1:19 AM
 * Purpose: Average of values
 */

//System Libraries
#include <iostream>
#include <iomanip> //to include he entire number
using namespace std;

//Starts here
int main(int argc, char** argv) {
    
    //Initialize variables
    float first = 2.8e1, second = 3.2e1, third = 3.7e1, fourth = 2.4e1;
    float fifth = 3.3e1;
    
    //Calculate the sum
    float sum = first + second + third + fourth + fifth;
    //cout << sum << endl; //test
    
    //calculate the average
    float avg = sum / 5;
    cout << setprecision(3) << showpoint;
    cout << "The average of 29, 32, 37, 24, 33 is: " << endl << avg << endl;
    //output avg
    

    return 0;
}

