/* Author: Carlos Lozano
 * Created on January 7, 2016, 5:56 PM
 * Purpose: Predict percent of total sales this year
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Starts Here
int main(int argc, char** argv) {
    
    //Initialize variables    
    float ttlSales = 8.6e5;//company's total sales
    float salsDiv = ttlSales*5.8e-1;
   // cout<<ttlSales<< endl; // check
   // cout<<salsDiv <<endl; // check    
         
    //output statement
    cout<<"The Sales Division made $" <<setprecision(4) <<salsDiv;
    cout<<" out of $" << ttlSales << " made this year."<< endl;  
    
    
    
       
    
    

    return 0;
}

