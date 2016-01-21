/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 20, 2016, 10:17 PM
 * Purpose: Area of Rectangles
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Start here
int main(int argc, char** argv) {
    
    //Initialize and declare variables
    float recLt1, recWd1;   //Length and width of rectangle1
    float recLt2, recWd2;   //Length and width of rectangle2
    float area1, area2;     //Area of rectangles
    
    //Input lenth and width of first rectangle
    cout<<"Enter the length of the first rectangle:";
    cin>>recLt1;
    cout<<"Enter the width of the first rectangle:";
    cin>>recWd1;
    //Length and width of the second rectangle
    cout<<"Enter the length of the second rectangle:";
    cin>>recLt2;
    cout<<"Enter the width of the second rectangle:";
    cin>>recWd2;
    
    //calculate the area of both rectangles
    area1=recLt1*recWd1;    //First
    cout<<endl<<"Area of first:"<<area1<<endl;
    area2=recLt2*recWd2;    //Second
    cout<<"Area of second:"<<area2<<endl;
    
    //output which is greater, or if the areas are the same
    if(area1==area2){
        cout<<"They are the same"<<endl;
        return 0;
        
    }
    else{
        cout<<"The rectangle that has the greater area is "<<
                (area1>area2?"the first one!":"the second one!");
    }

    return 0;
}

