/*  
 * File:   main.cpp
 * Author: Priya Lingam 
 * Created on March 17, 2018, 3:05 PM
 * Purpose: cost of a long distance
 */

#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Execution Begins Here!
int main(int argc, char** argv) {
   int minutes, startTime;
    char ch;
    string Day; 
    float cost,rate;
    
    //Declare Variables
    cout<<"fixed, showpoint, setprecision (2)"; 
 {
    cout << "Enter start time of the call(For example, 2:30 = 2330): ";
    cin >> startTime;
    while(startTime < 0 || startTime >= 2400)
 {
    cout << "\nInvalid time.";
    cout << "Enter start time of the call(For example, 2:30 = 2330): ";
    cin >> startTime;
 }
    cout << "Enter length of the call in minutes: ";
    cin >> minutes;
    cout << "Enter the day of the week: ";
    cin >> Day;
    
    if(Day == "Monday"|| Day == "MONDAY" 
    || Day == "Tuesday" || Day == "TUESDAY"  
    || Day =="Wednesday" || Day == "WEDNESDAY" 
    || Day =="Thursday" || Day == "THURSDAY"
    || Day == "Friday" || Day =="FRIDAY")
 { 
    if (startTime >= 800 && startTime <= 1800) 
    rate = 0.4; 
    
    else 
    rate = 0.25;
    cost = minutes * rate;
    cout << "\nRate for the call was " << "$" << rate << "a minute"<< endl;
    cout << "Your total cost: " << "$" << cost << endl;
 }
    else if(Day =="Saturday" || Day =="SATURDAY" 
    || Day =="Sunday" || Day =="SUNDAY")
 {
    rate = 0.15;
    cost = minutes * rate;
    cout << "Rate for the call was" << "$"
    << rate << "a minute"<< endl;
   cout << "Your total cost: " << "$" << cost;
 }
    else
    cout << "\nInvalid.";
    cout << endl << "\nWould you like to calculate your bill again? (y/n): ";
    cin >> ch;
    cout << endl << endl;

 }
    ( ch =='Y' || ch == 'y');
    cout << "\nEnd of Program\n\n"; 
    
     return 0;
}


   

