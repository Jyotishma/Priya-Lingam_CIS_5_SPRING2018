/*
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 30th, 2018, 11:20 AM
 * Purpose:  The number of calories
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
	const float CALORIES_PER_MIN = 3.9;

	int Min,
		Burnt = 0; 		// Acummulator set to 0

	cout << "\nTable displaying number of calories burnt on a\n"
		 << "treadmill that burns 3.9 calories per minute.\n"
		 << "\n   Minutes Ran      Calories Burnt\n"
		 << "------------------------------------------\n";

	for(Min = 10; Min <= 30; Min += 5)
	{
		Burnt = Min * CALORIES_PER_MIN;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	cout << endl;
	return 0;
}