/* 
 * File:   main.cpp
 * Author: Priya Lingam 
 * Created on March 17th, 2018, 12:05 PM
 * Purpose: Repeat this calculation for new values until the user says she or he wants to end the program
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
    int a, b, c;
    float d;
    char choice;	

    cout<<" Quadratic equation form: ax^2 +bx+c = 0" <<endl;
    cout<<"Quadratic equation form (-b}sqrt(b^2-4ac))/2a"<<endl;
    cout<<" Enter a:";
    cin>>a;
    cout<<" Enter b:";
    cin>>b;
    cout<<" Enter c:";
    cin>>c;
    d = (b*b - 4*a*c);
    if(d== 0)
 {	
    cout<<"Root of equation is: "<<-b/a<<endl;
 }
    else if(d>0)
 {   
    cout<<"Roots of equation are: "<<(((-1 *b) +(d))/(2*a));
    cout<<" and "<<(((-1 *b) - (d))/(2*a));
 }
    else
 {	
    cout<<"Complex Roots."<<endl;
    cout<<"Roots of equation: \n"<<
    (-1*b)/(2*a)<<" + i"<<(-1*d)<<endl;
    cout<<(-1*b)/(2*a)<<" - i"<<(-1*d)<<endl;
 }
    cout<<"If you want to continue then enter 'y' or 'Y':"<<endl;
    cin>>choice;
    (choice =='y' || choice =='Y');
}

