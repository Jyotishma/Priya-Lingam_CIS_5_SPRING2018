/* 
 * File:   main.cpp
 * Author: Priya Lingam 
 * Created on March 17th, 2018, 3:55 PM
 * Purpose: A blackjack hand
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Execution Begins Here!
int main(int argc, char** argv) {
        
    //Declare Variables
    int numOfCards,number,acecnt;
    char choice, card;

    number = 0;
    acecnt =0;
    cout<<"Enter number of cards(2-5):";
    cin>>numOfCards;
    if(numOfCards<2 || numOfCards >5)
    cout<<"Invalid input";
    
    else
 {
    for(int j = numOfCards; j>0; j--)
 {
    cout<<"Enter number of card: ";
    cin>>card;
    
    if(card>='2' && card<='9')
 {
    number  = number + 2 + (int)(card- '2');
 }
    else if (card =='j' || card =='J'|| 
    card =='t'|| card =='T'
    || card =='q'|| card =='Q'||
    card =='k'|| card =='K')
 {
    number+=10;
 }
    else if (card =='a'|| card == 'A')
 {
    acecnt++;
 }	
 }
 }
    if(acecnt)
 {
    while(acecnt>1)
 {
    number+= 1;
    acecnt--;
 }
    if(number >10 && acecnt == 1)
 {
    number+= 1;
 }
    else if(number <10 && acecnt ==1)
 {
    number+= 11;
 }
 }
    if(number>21)
    cout<<"bursted" <<endl;
    
    else
    cout<<"Score: "<< number<<endl;
    cout<<"If you want to repeat calculations for different variables then press 'Y' or 'y':\n";
    cin>>choice;
    while(choice =='y' || choice =='Y');
}
  

