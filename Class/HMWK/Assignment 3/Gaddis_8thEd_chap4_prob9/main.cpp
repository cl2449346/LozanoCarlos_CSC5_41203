/*
*File:main.cpp
*Author: Carlos Lozano
*Created on January 20, 2016, 7:38 PM
*Purpose: Change Game
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Start here
int main(int argc, char** argv){
		//problem to solve
		cout<<"Solution to Gaddis 8thEd chap4 prob9"<<endl;
		cout<<"Change game"<<endl;
		cout<<"-------------------------------------"<<endl;
		
		//Initialize and declare variables
		float dollar=1;										  //Dollars worth
		//cout<<"dollar="<<dollar<<endl;
		float pennies=0.01, nickel=0.05, dime=0.10, quarter=0.25;//Coin worth
		float nPen, nNic, nDim, nQtr;						 //Number of coins
		float ttlPen, ttlNic, ttlDim, ttlQtr;	 		     //Total of each
		float total;										 //Whole total
		
		
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
		//cout<<"ttlPen"<<ttlNic<<endl;				//Test
		ttlDim=nDim*dime;				//Total $ dimes
		//cout<<"ttlDim"<<ttlDim<<endl;				//test
		ttlQtr=nQtr*quarter;			//Total $ quarters
		//cout<<"ttlQtr"<<ttlQtr<<endl;		//test
		total=ttlPen+ttlNic+ttlDim+ttlQtr;//Whole total
		cout<<endl<<"-------------------------------------"<<endl;
		cout<<"Your total: $"<<setprecision(2)<<fixed
			<<showpoint<<total<<endl;
		
		//output
		if(total==dollar){
			cout<<"Congrats you won"<<endl<<"You did it"<<endl;
		}
		else(cout<<"You are the weakest link, goodbye");
		
		
		
		
		
		return 0;
}