/* 
 * File:   main.cpp
 * Author: Priya Lingam 
 * Created on March 15th, 2018, 3:05 PM
 * Purpose: Let the user repeat this calculation until the user says she or he
            is done
 */
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float dueCost, dueInterest, minPayment, bal;
    char Continue;

 	 cout<<"Enter bal due: ";
	 cin>>bal;
	 if(bal>1000)
	  dueInterest = ((bal - 1000)*.01 + (1000)*.015);
	 else
             
	//Initial Variables
        dueInterest = bal*.015;
	
	dueCost = bal + dueInterest;

	minPayment = dueCost<=10? 
    	dueCost : ((dueCost*.1)> 10? (dueCost*.1):10);
        
         //Display Outputs
	cout<<"\n Interest on balance:<>Continue"  ;
	(Continue =='y' || Continue =='Y');
        
 system("pause");
}

