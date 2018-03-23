/* 
 * File:   main.cpp
 * Author: Priya Lingam 
 * Created on March 15th, 2018, 4:05 PM
 * Purpose: Let the user play again until the user says she or he is done
 */

#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Execution Begins Here!
int main(int argc, char** argv) {
	char p1, p2;
	string check;
        
    //Declare Variables
	cout << "Player 1, please enter your choice [P/R/S]" << endl;
	cin >> p1;
	cout << "Player 2, please enter your choice [P/R/S]" << endl;
	cin >> p2;

	if(p1 == p2)
	cout << "Nobody wins" << endl;
	if( (p1 == 'P' && p2 == 'p') || (p1 == 'p' && p2 == 'P') )
	cout << "Nobody wins" << endl;
	if( (p1 == 'S' && p2 == 's') || (p1 == 'S' && p2 == 's') )
	cout << "Nobody wins" << endl;
	if( (p1 == 'R' && p2 == 'r') || (p1 == 'R' && p2 == 'r') )
	cout << "Nobody wins" << endl;

	if((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r'))
	cout << "Paper covers rock, Player 1 win" << endl;
	if((p1 == 'R' || p1 == 'r') && (p2 == 'P' || p2 == 'p'))
	cout << "Paper covers rock, Player 2 win" << endl;

	if((p1 == 'P' || p1 == 'p') && (p2 == 'S' || p2 == 's'))
	cout << "Scissors cut paper, Player 2 win" << endl;
	if((p1 == 'S' || p1 == 's') && (p2 == 'P' || p2 == 'p'))
	cout << "Scissors cut paper, Player 1 win" << endl;

	if((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's'))
	cout << "Rock breaks scissors, Player 1 win" << endl;
	if((p1 == 'S' || p1 == 's') && (p2 == 'R' || p2 == 'r'))
	cout << "Rock breaks scissors, Player 1 win" << endl;

	cout << "Do you want to continue? [y/n]" << endl;
	cin >> check;
        (check != "n");

	return 0;
}

