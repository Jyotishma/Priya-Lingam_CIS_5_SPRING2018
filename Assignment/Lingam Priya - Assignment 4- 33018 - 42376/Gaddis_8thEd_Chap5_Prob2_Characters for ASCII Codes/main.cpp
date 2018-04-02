/*
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 30th, 2018, 9:20 AM
 * Purpose: ASCII code
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
	cout << "Characters for the ASCII Codes\n";
	cout << "--------------------------------------\n\n";

	// Loop through the ASCII codes.
	for(int code = 0; code <= 127; code++)
	{
		if ( code %16==0)
		    cout << endl;
		cout << (char)code << "  ";
	}
	cout << endl << endl;

	return 0;
}