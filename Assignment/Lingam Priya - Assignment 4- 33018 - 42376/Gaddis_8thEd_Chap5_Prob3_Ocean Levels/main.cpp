/*
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 30th, 2018, 10:20 AM
 * Purpose:  The number of millimeters that the ocean will have risen
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
	int Year;
	float Risen = 0.0;

	cout << "Table showing the total number of millimeters the oceans\n"
		 << "will have risen each year for the next 25 years.\n\n"
		 << "    Year        Amount Risen\n"
		 << "                (millimeters)\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 25; Year++)
	{
		Risen += 3.1;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Risen << endl;
	}
	return 0;
}