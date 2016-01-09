/* Author: Carlos Lozano:
 * Created on January 8, 2016, 9:59AM
 * Purpose: Land Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//Global
float FT2ACR = 4.356e4; //conversion to acres

//Starts here
int main(int argc, char** argv) {
    
    //cout << FT2ACR;// test global
    
    //Initialize Variables
    int tract = 3.91876e5;//area of land in square feet
    int acres = tract / FT2ACR; //calculation of acres
    
    //cout << tract; //output track
    cout << "There are "<< acres; //output acre
    cout << " acres in this particular tract of land" << endl; //statement

    return 0;
}

