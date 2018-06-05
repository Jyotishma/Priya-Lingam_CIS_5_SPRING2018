/* 
 * File:   main.cpp
 * Author: Priya Lingam
 * Created on May 1st, 2018, 9:45 AM
 * Purpose:  Snake and Ladder design board game
 */
    //This is snakes and ladder Game project. 
    //This program will display snakes and ladder Board games.
    //It will take two player names. 
    //Gives you winner of the Game by using Random numbers.

//System Libraries
#include<iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>//Rand/Srand
#include <ctime> //Time
#include <fstream> //File i/o
#include<string>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns


//Function Prototypes
int randomnum(int &, fstream &);
int rand(int&);
void printboard(int);
 void hitSnake();
 void hitLadder(); 
 
//Execution Begins Here!
  int main(int argc, char** argv) {
   float num;
   ifstream a;
int rows=4;
int cols=5;
int score[rows][cols];

string player1;
string player2;

int player1_score;
int player2_score;

//set the random number seed
  srand(static_cast<unsigned int>(time(0)));
    
//Declare Variable
  int h1,h4,h9,h21;    //h represents the top ladder
  int t17,t54,t34,t62;  //t represents the tail of the snake
  int board;              //On the board there is up to 100 numbers
  int p1_score=0.0f,p2_score=0.0f; 
  int dice=rand()%6+1;
  string cont;
    
   fstream file;
   file.open("Snake and Ladder",ios::out);
   if(!file) cout<<"Uh uh!!!!\n";
   file<<"Hiiiiiii"<<endl;
   file<<"Enjoy your day"<<endl;

//Initialize
  board =10;//0;
  h1=h4=h9=h21=0;
  t17=t54=t34=t62=0;
    
//Check the statistics
   
    char dice1=rand()%6+1;//[1,6]
    char dice2=rand()%6+1;//[1,6]
    char sum=dice1+dice2;
    char cntThrw=1;
        
    if(h1==38)h1++;
    else if(h4==14)h4++;  // if your position is on the num 4 you will climb up on the num 14
    else if(h9==7)h9++;
    else if(h21==34)h21++;
    
    else{
    bool rollAgn;
    do{
    rollAgn=true;
    dice1=rand()%6+1;//[1,6]
    dice2=rand()%6+1;//[1,6]
    char t17=dice1+dice2;
    t17++;
    if(t17==7){
    rollAgn=false;
    if(t54==38)t54++;  //if your position is on the num 54 you will slide down on the num 344 
    if(t34==23)t34++;
    if(t62==33)t62++;
                   
    }else if(h1==t17){
    rollAgn=false;
    switch(sum){                     
 }
 }
 }  while(rollAgn);
 }
    if (h21>t17)h4=t17; //If you are on h4 it increases your position

    char play = 'y';
    while(play=='y')
    {

//Beginning of the game
    cout<<endl;
    cout<<endl;
    cout<<"=========================================        "<<endl;
    cout<<endl;
    cout<< setw(30) <<"SNAKE AND LADDER GAME"               <<endl;
    cout<<endl;
    cout<<"========================================        "<<endl;
    cout<<endl;
    cout<< setw(30) << "Designed by Priya Lingam"          <<endl;
    cout<<endl;
    cout<<"========================================       "<<endl;
    cout<<endl;
    cout<< setw(30) <<  "Lets Begin the GAME"             <<endl;
    cout<<endl;
    cout<<"=======================================       "<<endl;
    cout<<endl;
    cout<< setw(30) <<   "Have Fun!"                     <<endl;
    cout<<endl;
    cout<<"=======================================      "<<endl;
             
    char  L1, L4, L9, L21, L28, L51, L71, L80;//Ladder is at the postion
    char S17, S54, S62, S87, S93, S95, S98;//Sanke is at the postion
        
//Points on the Ladder number
    cout<<"When you are at the position of L1=L38" <<endl; //you will climb at the number 38 
    cout<<"When you are at the position of L4=L14" <<endl; //you will climb at the number 14 
    cout<<"When you are at the position of L9=L31" <<endl; //you will climb at the number 31 
    cout<<"When you are at the position of L21=L44" <<endl; //you will climb at the number 42 
    cout<<"When you are at the position of L28=L84" <<endl; //you will climb at the number 84 
    cout<<"When you are at the position of L51=L67" <<endl; //you will climb at the number 67 
    cout<<"When you are at the position of L71=L91" <<endl; //you will climb at the number 91
    cout<<"When you are at the position of L80=L100" <<endl; //you will climb at the number 100
         
    //Points on the Snake number
    cout<<"When you are at the position of S17=S7" <<endl; //you will slide down at the number 7 
    cout<<"When you are at the position of S54=S34" <<endl; //you will slide down at the number 34
    cout<<"When you are at the position of S62=S19" <<endl; //you will slide down at the number 19 
    cout<<"When you are at the position of S64=S60" <<endl; //you will slide down at the number 60 
    cout<<"When you are at the position of S87=S24" <<endl; //you will slide down at the number 24 
    cout<<"When you are at the position of S93=S73" <<endl; //you will slide down at the number 73 
    cout<<"When you are at the position of S95=S75" <<endl; //you will slide down at the number 75
    cout<<"When you are at the position of S98=S79" <<endl; //you will slide down at the number 79
    
    //If there is no snake or ladder from cell i, then move[i] is -1
    // Otherwise move[i] contains cell to which snake or ladder at i
    // takes to.

cout<<"Your score is:"<<player1_score<<endl;
cout<<player2<<"Please enter a key to generate a random number:"<<endl;
cin.get();


    int i;
    string pl1,pl2;

//Each player takes turns to roll the dice
     srand (time(0));
     
//Output the results
    //Each player puts their counter on the space that says "start here"
    cout<<"enter the name of  player 1"<<endl;
    cin>>pl1;
    cout<<"enter the name of the player 2 "<<endl;
    cin>>pl2;
    cout<<"the position of player1 and player2 is 0 initially"<<endl;
      
    while(p1_score<100.0f && p2_score<100.0f)
{
    
    //Move your counter forward the number of spaces shown on the dice.
    cout<<pl1<<" It is your turn press any key to play "<<endl;
    cin>>cont;
    randomnum(p1_score, file);
    cout<<"your score is "<<p1_score<<endl;

    cout<<pl2<<" It is your turn press any key to play"<<endl;
    cin>>cont;
    randomnum(p2_score, file);
    cout<<"your score is "<<p2_score<<endl; 
}
    if(p1_score>p2_score)
{
    cout<<endl;
    cout<<"congratulations " << pl1 << " you have won the game"<<endl;
    cout << endl;
    cout<<"========================================"<<endl;
    cout<<endl;    
    cout<<"        End of the Project!              "<<endl;
    cout<<"========================================"<<endl;
    cout<<endl;
}
    if(p2_score>p1_score)
{
    cout<<endl;
    cout<<"congratulations " << pl2 << " you have won the game"<<endl;
    cout<<endl;
    cout<<"========================================"<<endl;
    cout<<endl;    
    cout<<"        End of the Project!              "<<endl;
    cout<<"========================================"<<endl;
    cout<<endl;
}
    if(p1_score==p2_score)
{
    cout<<"match is draw"<<endl;
}
    cout << "Play again? (y/n)";
    cin >> play;
    if(play!='y' && play!='n')
{
    cout<<"Please enter y or n." << endl;
    cin>>play;
    }
    p1_score=0.0f;
    p2_score=0.0f;
}
    file.close();
}
    int randomnum(int &score, fstream &file)
{
    int dice;
    dice=rand()%6+1;
    score=dice+score;
  
 //If your counter lands on the head of a snake, you must slide down to the 
 //bottom of the snake.
     
 //Output Variables
         
    cout<<"You got "<<dice<<" Point !! "<<endl;
    cout<<"Now you are at position "<<score<<endl;
    if(dice==6)
 {
    cout<<"Roll again"<<endl;
    dice=rand()%6+1;
    score=dice+score;
    cout<<"You got "<<dice<<" Point !! "<<endl;
    cout<<"Now you are at position "<<score;
 }
    if(dice==5)
 {
    cout<<"You have 3 turns to roll higher than a 3"<<endl;
    for(int i=0;i<3;i++)
 {
    string cont;
    cout<<"Roll: "<<i+1<<endl;
    dice=rand()%6+1;
    cout<<dice;
    cin>>cont;
    if(dice>3)
    break;
 }
 }   
    switch(score) {
    case 17 :score=7;
    hitSnake();

    break;
    case 54 :score=34;
    hitSnake();

    break;
    case 62 :score=19;
    hitSnake();

    break;
    case 64 :score=60;
    hitSnake();

        
    break;
    case 87 :score=24;
   hitSnake();

    break;
    case 93 :score=73;
    hitSnake();

    break;
    case 95 :score=75;
    hitSnake();

    break;
    case 98 :score=79;
    hitSnake();

    break;
    case 55 :score=7;
    hitSnake();

    break;
    case 52 :score=11;
    hitSnake();

    break;
    case 48 :score=9;
   hitSnake();

    break;
    case 46 :score=5;
   hitSnake();

    break;
    case 44 :score=22;
    hitSnake();
    
    //If your counter lands at the bottom of a ladder, you can move up to the 
    //top of the ladder.
    break;
    case 8 :score=26;
    hitLadder();

    break;
    case 1 :score=38;
    hitLadder();

    break;
    case 4 :score=14;
    hitLadder();

    break;
    case 9 :score=31;
    hitLadder();

    break;
    case 21 :score=42;
    hitLadder();

    break;
    case 51 :score=67;
    hitLadder();

    break;
    case 71 :score=91;
   hitLadder();
        
    break;
    case 28 :score=84;
    hitLadder();
 
//The first player to get to the space that says 'home' is the winner.
    break;
    case 80 :score=100;
    hitLadder();
 }

    return score;
}
    void hitSnake()
{
        cout<<"you ran into a snake!"<<endl;
}

void hitLadder()
{
	cout<<"luckyyy boy u got ladder"<<endl;
}
    