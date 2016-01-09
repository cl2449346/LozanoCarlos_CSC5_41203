/* Author: Carlos Lozano
 * Created on January 8, 2016, 1:19 AM
 * Purpose: Calculate circuit board price
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Starts here
int main(int argc, char** argv) {
    
    //Initialize variables
    float price = 1.495e1; //circuit board price
    cout << "If the circuit board costs $"<< setprecision(4);
    cout << price << "," <<endl<< "then we need to sell the boards for "; //price
    float profit = price * 1.35; // calculate selling price
    cout << "$" << profit << ".";
    

    return 0;
}

