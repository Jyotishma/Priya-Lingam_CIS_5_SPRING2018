/*
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 29th, 2018, 1:20 PM
 * Purpose: The speed of the vehicle
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
	int Speed,
		Hours,
		Distance = 0; 	// Set accumulator to 0

	// Ask the user to input the speed
	cout << "What is the speed of the vehicle in mph? ";
	cin  >> Speed;
	cout << "How man hours has it traveled? ";
	cin  >> Hours;

	if (Speed >= 0 && Hours >= 1)
	{
		cout << "Hour   Distance Traveled\n"
		 << "--------------------------------\n";

		for (int X = 1; X <= Hours; X++)
		{
			
			Distance += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Distance << endl;
		}
	}
	return 0;
}