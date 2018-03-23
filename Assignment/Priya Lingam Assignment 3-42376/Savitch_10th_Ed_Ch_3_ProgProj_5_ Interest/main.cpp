/* 
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 17th, 2018, 10:40 AM
 * Purpose:  Menu with construct examples
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions, 2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float intrestRate, loanAmount, simpleIntrest , bal;
    int month;
    char choice;	
    
    cout<<" Enter total loan:";
    cin>>loanAmount;
    cout<<" Enter rate of interest:";
    cin>>intrestRate;
    cout<<" Monthly payment = "<<(loanAmount/20)<<"\n";
    simpleIntrest = 0;
    bal = loanAmount;
    month = 0;
    while (bal>0)
 {
    simpleIntrest +=((intrestRate * bal)/(100 *12));
    month++;
    bal -=(loanAmount/20)-((intrestRate * bal)/(100 *12));
     
    if(bal<0)
    bal = 0;
    cout<<" bal left:  "<<bal<<"\n";
 }
    cout<<" Simple annualized interest is:" <<((simpleIntrest*100*12)/(loanAmount*month));
    cout<<" To continue then enter 'y' or 'Y':\n";
    cin>>choice;
    while(choice =='y' || choice =='Y');
}
    
   

