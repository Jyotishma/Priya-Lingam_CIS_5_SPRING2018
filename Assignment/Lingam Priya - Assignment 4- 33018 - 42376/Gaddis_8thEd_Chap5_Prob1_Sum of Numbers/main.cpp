/*
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 30th, 2018, 8:20 AM
 * Purpose:  The sum of all integers
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
	int sum = 0;
	int num;

	
	cout << "Enter a number greater than 0.\n";
		cin >> num;
	
		
	for (int counter = 0; counter <= num; counter++)
	
	{	
		
		sum = sum + num;
		
		counter++;
	}
	

	if (num < 1)
		
	{
			cout << "\n" << num << " is an invalid input.";
			cout << " The program will now terminate.\n";
		
	}
	
	else

	
	cout << "\nThe sum of numbers 1 - " << num
			 << " " << "is " << sum << endl;
		
	
	return 0;
}