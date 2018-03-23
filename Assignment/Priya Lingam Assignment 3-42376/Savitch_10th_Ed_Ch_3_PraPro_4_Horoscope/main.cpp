/* 
 /*
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on March 17th, 2018, 11:40 AM
 * Purpose: Horoscope Signs of the same Elements
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int dayDate,closeDate,closeMonth;
    int month, date;
    char exit;	
 {
    //Display input
    cout<<"Enter Birthday details:"<<endl;
    cout<<" Enter the day of date:";
    cin>>date;
    cout<<" Enter month: ";
    cin>>month;
    
    if(month>12 || date>31)
    cout<<" Invalid input";
    
    else
 {
    dayDate = 21;
    closeDate = 19; 
    month = 3; 
    closeMonth = 4;
    
    if(( month == month && date >= dayDate)
    ||(month == closeMonth && date <= closeDate))
 {
    cout<<"Your Sign is :  Aries \n";
    if(date >= closeDate-3)
    cout<<" you are a cusp baby and with adjacent sign: Taurus \n";
    
    else if(date <= dayDate +3)
    cout<<" you are a cusp baby and with adjacent sign: Pieces \n";
    cout<<" Leo and Sagittarius will be compatible for your birthday\n";
 }
    
    dayDate = 20;
    closeDate = 20; 
    month = 4; 
    closeMonth = 5;
    
    if(( month == month && date>= dayDate) 
    ||(month ==closeMonth && date <= closeDate))
 {   
    cout<<"Your Sign is : Taurus\n";
    if(date >= closeDate - 3)
    cout<<" you are a cusp baby and with adjacent sign: Gemini \n";
    
    else if(date <= dayDate + 3)
    cout<<" you are a cusp baby and with adjacent sign: Aries \n";

    cout<<" Virgo and Capricorn will be compatible for your birthday\n";
 }
    dayDate = 21;
    closeDate = 21; 
    month = 5; 
    closeMonth = 6;
    
    if(( month == month && date >= dayDate)
    ||(month == closeMonth && date <= closeDate))
 {  
    cout<<"Your Sign is : Gemini\n";
    if(date >= closeDate - 3)
    cout<<"Your Sign is : Gemini\n";
    
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Cancer \n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign: Taurus \n";
    cout<<" Libra and Aquarius will be compatible for your birthday\n";
 }
    dayDate = 22;
    closeDate = 22; 
    month = 6; 
    closeMonth = 7;
    
    if(( month == month && date >= dayDate)  
    ||(month == closeMonth && date <= closeDate))
 {  
    cout<<"Your Sign is : Cancer\n";
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Leo\n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign: Gemini\n";
    cout<<" Scorpio and Pisces will be compatible for your birthday\n";
 }
    dayDate = 23;
    closeDate = 22; 
    month = 7; 
    closeMonth = 8;
    if(( month == month && date >= dayDate) 
    ||(month == closeMonth && date <= closeDate))
 {   
    cout<<"Your Sign is : Leo\n";
    if(date >= closeDate - 3)			
    cout<<"you are a cusp baby and with adjacent sign: Virgo\n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign: Cancer\n";
    cout<<" Aries and Sagittarius will be compatible for your birthday\n";
 }
    dayDate = 23;
    closeDate = 22; 
    month = 8; 
    closeMonth = 9;
    
    if(( month == month && date>= dayDate) 
    ||(month == closeMonth && date <= closeDate))
 {   
    cout<<"Your Sign is : Virgo\n";
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Libra\n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign: Leo\n";
    cout<<" Taurus and Capricorn will be compatible for your birthday\n";
 }
    dayDate = 23;
    closeDate = 22; 
    month = 9; 
    closeMonth = 10;
    
    if(( month == month && date>= dayDate) 
    ||(month ==closeMonth && date <= closeDate))
 {  
    cout<<"Your Sign is : Libra\n";
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Scorpio\n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign:Virgo\n";
    cout<<" Gemini and Aquarius will be compatible for your birthday\n";
 }
    dayDate =23;
    closeDate = 21;
    month = 10; 
    closeMonth = 11;
    
    if(( month== month && date>= dayDate) 
    ||(month == closeMonth && date <= closeDate))
 {   
    cout<<"Your Sign is :Scorpio\n";				
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Sagittarius\n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign: Libra\n";
    cout<<" Cancer and Pisces will be compatible for your birthday\n";
 }
    dayDate =22;
    closeDate = 21;
    month = 11; 
    closeMonth = 12;
    
    if(( month== month && date>= dayDate)  
    ||(month == closeMonth && date <= closeDate))
 {   
    cout<<"Your Sign is :Sagittarius\n";
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Sagitarius\n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign: Libra\n";
    cout<<" Aries and Leo will be compatible for your birthday\n";
 }
    dayDate = 22;
    closeDate = 19; 
    month = 12;
    closeMonth = 1;
    
    if(( month== month && date>= dayDate) 
    ||(month ==closeMonth && date <= closeDate))
 { 
    cout<<"Your Sign is : Capricorn\n";
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Aquarius\n";
    
    else if(date <= dayDate +3)						
    cout<<"you are a cusp baby and with adjacent sign:Sagittarius\n";
    cout<<" Taurus and Virgo will be compatible for your birthday\n";
 }			 
    dayDate = 20;
    closeDate = 18;
    month = 1;
    closeMonth = 2;
    
    if(( month== month && date>= dayDate)  
    ||(month ==closeMonth && date <= closeDate))
 {  
    cout<<"Your Sign is : Aquarius\n";
    if(date>= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Pisces/n";
    
    else if(date <= dayDate + 3)
    cout<<"you are a cusp baby and with adjacent sign: Capricorn\n";
    cout<<" Gemini and Libra will be compatible for your birthday\n";
 }
    dayDate = 19;
    closeDate = 20; 
    month = 2;
    closeMonth = 3;

    if(( month == month && date >= dayDate) 	
    ||(month == closeMonth  && date <= closeDate))
 {  
    cout<<"Your Sign is : Pieces\n";
    if(date >= closeDate - 3)
    cout<<"you are a cusp baby and with adjacent sign: Aries\n";
    
    else if(date <= dayDate + 3)							
    cout<<"you are a cusp baby and with adjacent sign: Aquarius\n";
    cout<<" Cancer and Scorpio will be compatible  for your birthday\n";
 }
    cout<<"If you want to repeat calculations for different variables then press 'y' or 'Y':\n";
    cin>>exit;
 } while(exit=='y' || exit =='Y');
 }
    return 0;
}

