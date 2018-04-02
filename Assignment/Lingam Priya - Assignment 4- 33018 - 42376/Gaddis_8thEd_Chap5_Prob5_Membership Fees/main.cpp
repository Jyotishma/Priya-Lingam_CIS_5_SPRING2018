/*
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 30th, 2018, 12:20 PM
 * Purpose: The rates for the next six years
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
	const float RATE = 0.04,
				 CURRENT_CHARGE = 2500.0;
	int Year;
	float YrRate;

	cout << "\nCountry club projected rates\n"
		 << "    for the next six years\n"
		 << "-----------------------------\n"
		 << "      Year       Rate\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 6; Year++)
	{
		YrRate = CURRENT_CHARGE * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
	return 0;
}