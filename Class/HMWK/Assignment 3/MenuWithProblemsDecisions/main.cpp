/* 
 * File:   main.cpp
 * Author: Carlos Lozano
 * Created on January 19, 2016, 8:32 PM
 * Purpose: menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constant
const float PI=4*atan(1);//Universal constant 3.14159

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short nSoltn;  //Problem solution to display
    bool endgame=true;      //Exit program when false
    
    //Menu to display solution
    do{
        //Input problem to display//menu
        cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
        cout<<"Assignment 3 problem set"<<endl;
        cout<<"Type 1 to display Savitch 8thEd Chap3 Prob12"<<endl;
        cout<<"Type 2 to display Gaddis 8thEd Chap 3 "<<endl;
        cout<<"Type 3 to display Gaddis 8thEd Chap4 Prob1"<<endl;
        cout<<"Type 4 to display Gaddis 8thEd Chap 4 Prob2"<<endl;
        cout<<"Type 5 to display Gaddis 8thEd Chap 4 Prob 3"<<endl;
        cout<<"Type 6 to display Gaddis 8thEd Chap4 Prob4"<<endl;
        cout<<"Type 7 to display Gaddis 8thEd chap4 prob9"<<endl;
        cout<<"Type anything else to exit:";
        cin>>nSoltn;
        cout<<endl<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
        
    //Solutions to all the problems
    switch(nSoltn){
        case 1:{
            //The problem to solve
            cout<<endl<<"Solution to Savitch 8thed chap3 prob12"<<endl;
            cout<<endl<<endl<<"The approximation of PI"<<endl;
            cout<<"--------------------------------"<<endl;

            //Declare and initialize variables for apprxPI
            float apprxPI=1;    //Approximate value of PI
            unsigned int nTerms;//Number of terms
            char sign=-1;       //Alt. Sign of the PI sequence

            //Input the number of terms
            cout<<"Input the number of terms to approximate PI"<<endl;
            cin>>nTerms;

            //Approximate PI/4
            for(int i=2,j=3;i<=nTerms;i++,j+=2){
                apprxPI+=(sign/static_cast<float>(j));
                sign*=-1;
            }
            apprxPI*=4; //Multiply by 4 once to approximate PI

            //Output the results
            cout<<"The exact value of PI= "<<PI<<endl;
            cout<<"The number of terms it took to approx PI="<<nTerms<<endl;
            cout<<"The approx value of PI= "<<apprxPI<<endl<<endl;
            
            //to exit problem
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Exit problem and return to main menu?(y/n)"<<endl;
            cin>>endgame;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        }break;

        case 2:{
            cout<<endl<<"Solution to Gaddis 8thEd Chap 4 Prob7"<<endl<<endl;
            cout<<endl<<"The Calculation of time"<<endl<<endl;
            cout<<"--------------------------------"<<endl;

            //Declare and initialize variables
            unsigned int seconds;   //Number of seconds
            unsigned int minutes;   //Number of minutes
            unsigned int hours;     //Number of hours
            unsigned int days;      //Number of days

            //Input number of seconds 
            cout<<"Enter an amount of seconds"<<endl;
            cin>>seconds;

            //Calculate time
            minutes=seconds/60; //Minutes
            hours=seconds/3600; //Hours
            days=seconds/86400; //Days

            //Output seconds, minutes, hours or days
            if(seconds>=60&&seconds<3600)//output minutes
                {
                    cout<<"You entered: "<<minutes<<" Minutes and "<<seconds%60
                            <<" Seconds"<<endl;
                }
                else if(seconds>=3600&&seconds<86400)//output minutes
                {
                    cout<<"You entered: "<<hours<<" Hours and "<<minutes
                            <<" Minutes and "<<seconds%60<<" Seconds"<<endl;
                }
                else if(seconds>=86400)
                {
                    cout<<"You entered: "<<days<<" Days and "<<hours
                            <<" Hours and "<<minutes<<" Minutes and "
                            <<seconds%60<<" Seconds"<<endl;
                }
                else{
                    cout<<"You only entered "<<seconds<<" seconds"<<endl;
                }
            
            //to exit problem
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Exit problem and return to main menu?(y/n)"<<endl;
            cin>>endgame;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        }break;

        case 3:{
            cout<<endl<<"Solution to Gaddis 8thEd Chap4 Prob1"<<endl;
            cout<<endl<<"A Tail of Two Numbers"<<endl;
            cout<<"--------------------------------"<<endl;

            //Initialize variables
            int num1, num2; //Two numbers that will be entered

            //Input variables
            cout<<"Enter the first number: ";
            cin>>num1;
            cout<<"Enter the second number: ";
            cin>>num2;

            //Output which number is smaller and which is larger
            cout<<endl<<"The smaller number is: "<<(num1<num2?num1:num2)<<endl;
            cout<<"The larger number is: "<<(num1>num2?num1:num2)<<endl;
            
            //to exit problem
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Exit problem and return to main menu?(y/n)"<<endl;
            cin>>endgame;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                   }break;

        case 4:{
            //Problem to solve
            cout<<endl<<"Solution to Gaddis 8thEd Chap 4 Prob2"<<endl<<endl;
            cout<<endl<<"Roman Numeral Converter"<<endl<<endl;
            cout<<"--------------------------------"<<endl;

            //Initialize and declare variables
            unsigned short number;  //Number to be converted
            bool endgame=true;      //Exit program when false

            //Input
            cout<<"Input a number between 1 and 10: "<<endl;
            cin>>number;

            //Output roman numberal
            switch(number){
                    case 1:{
                        //For number 1
                        cout<<"The Roman Numeral for 1 is i"<<endl;
                    break;
                    }

                    case 2:{
                        //For number 2
                        cout<<"The Roman Numeral for 2 is ii"<<endl;
                        break;
                    }

                    case 3:{
                        //For number 3
                        cout<<"The Roman Numeral for 3 is iii"<<endl;
                        break;
                    }

                    case 4:{
                        //For number 4
                        cout<<"The Roman Numeral for 4 is iv"<<endl;
                        break;
                    }

                    case 5:{
                        //For number 4
                        cout<<"The Roman Numeral for 5 is v"<<endl;
                        break;
                    }

                    case 6:{
                        //For number 4
                        cout<<"The Roman Numeral for 6 is vi"<<endl;
                        break;
                    }

                    case 7:{
                        //For number 4
                        cout<<"The Roman Numeral for 7 is vii"<<endl;
                        break;
                    }

                    case 8:{
                        //For number 4
                        cout<<"The Roman Numeral for 8 is viii"<<endl;
                        break;
                    }

                    case 9:{
                        //For number 4
                        cout<<"The Roman Numeral for 9 is ix"<<endl;
                        break;
                    }

                    case 10:{
                        //For number 4
                        cout<<"The Roman Numeral for 4 is x"<<endl;
                        break;
                    }
                default:{
                    cout<<"Invalid Number"<<endl;
                    
            //to exit problem
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Exit problem and return to main menu?(y/n)"<<endl;
            cin>>endgame;
                }
            }
        }break;

        case 5:{
            cout<<endl<<"Solution to Gaddis 8thEd Chap4 Prob3"<<endl;
            cout<<endl<<"Magic Date"<<endl;
            cout<<"--------------------------------"<<endl;

            //Initialize and declare variables
            int month, day, year, magcDt;   //The date and magic date

            //Input the date
            cout<<"Is your date magic?"<<endl;
            cout<<"Enter a month in numeric from (m)"<<endl;
            cin>>month;
            cout<<"Enter a day"<<endl;
            cin>>day;
            cout<<"Enter a two digit year"<<endl;
            cin>>year;

            //calculate magic date
            magcDt=month*day;
            cout<<(magcDt==year?"This date is magic!":
                "This date is not magic!")<<endl;
            
            //to exit problem
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Exit problem and return to main menu?(y/n)"<<endl;
            cin>>endgame;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                
        
        }break; 
        case 6:{
            cout<<endl<<"Solution to Gaddis 8thEd Chap4 Prob4"<<endl;
            cout<<endl<<"Areas of Rectangles"<<endl;
            cout<<"--------------------------------"<<endl;
            
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
                cout<<"Exiting problem and returning to main menu"<<endl;

            }
            else{
                cout<<"The rectangle that has the greater area is "<<
                        (area1>area2?"the first one!":"the second one!")<<endl;
                cout<<"Exiting problem and returning to main menu"<<endl;
                
            //to exit problem
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Exit problem and return to main menu?(y/n)"<<endl;
            cin>>endgame;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                
            }break;
        }
        case 7:{
            //problem to solve
		cout<<"Solution to Gaddis 8thEd chap4 prob9"<<endl;
		cout<<"Change game"<<endl;
		cout<<"-------------------------------------"<<endl;
		
		//Initialize and declare variables
		float dollar=1;                              //Dollars worth
		//cout<<"dollar="<<dollar<<endl;
		float pennies=0.01,nickel=0.05,dime=0.10,quarter=0.25;//Worth
		float nPen, nNic, nDim, nQtr;               //Number of coins
		float ttlPen, ttlNic, ttlDim, ttlQtr;       //Total of each
		float total;                                //Whole total
		
		
		//input
		cout<<"How many pennies? ";
		cin>>nPen;
		cout<<endl<<"How many nickels? ";
		cin>>nNic;
		cout<<endl<<"How many dimes? ";
		cin>>nDim;
		cout<<endl<<"How many quarters? ";
		cin>>nQtr;
		
		//Calculate total
		ttlPen=nPen*pennies;			//Total $ Pennies
		//cout<<endl<<"ttlPen"<<ttlPen<<endl;		//Test input
		ttlNic=nNic*nickel;				//Total $ nickel
		//cout<<"ttlPen"<<ttlNic<<endl;			//Test
		ttlDim=nDim*dime;				//Total $ dimes
		//cout<<"ttlDim"<<ttlDim<<endl;			//test
		ttlQtr=nQtr*quarter;                        //Total $ quarters
		//cout<<"ttlQtr"<<ttlQtr<<endl;                 //test
		total=ttlPen+ttlNic+ttlDim+ttlQtr;//Whole total
		cout<<endl<<"-------------------------------------"<<endl;
		cout<<"Your total: $"<<setprecision(2)<<fixed
			<<showpoint<<total<<endl;
		
		//output
		if(total==dollar){
                    cout<<"Congrats you won"<<endl<<"You did it"<<endl;
                    cout<<"Exiting problem and returning to main menu"<<endl;
		}
		else(cout<<"You are the weakest link, goodbye"<<endl);
                cout<<"Exiting problem and returning to main menu"<<endl;
                
            //to exit problem
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Exit problem and return to main menu?(y/n)"<<endl;
            cin>>endgame;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                break;
        }

        default:{
            //to exit problem
            cout<<"Exiting game"<<endl;
            endgame=false;
        }
    }
    }while(endgame);
    
    

            return 0;
}

