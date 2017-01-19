/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 19, 2017, 12:36 PM
 * Purpose: crap stats version 2
 */

//System Libraries Here
#include <iostream>//Input Output library
#include <ctime>   //Random numbers
#include <cstdlib> //Time to set the Seed
#include <fstream> //File stream library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const short PERCENT = 100; //Percentage conversion
const int   MILLION = 1E6; //Million
const int   HUNTHSD = 1E5;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Instantiate and Open files
    ifstream in;
    ofstream out;
    in.open("NumberOfGames.dat");
    out.open("ResultsOfGames.dat");
    
    //Declare all Variables Here
    unsigned int nGames = 100000;
    unsigned int wins = 0, losses = 0, maxThrw = 0;
    unsigned int avgThrw = 0;
    
    //Input the number of games
    //Last line will be number of games
    while(in>>nGames);
    nGames = nGames > MILLION?HUNTHSD:nGames;
    
    //Loop and take dice statistics
    for(int game = 1; game <= nGames; game++){
    //call random number generator for the dice
        char die1 = rand() % 6 + 1;
        char die2 = rand() % 6 + 1;
        unsigned int cntThrw = 1;
        char sum = die1 + die2;
        if(sum == 2 || sum == 3 || sum == 12)losses++;
        else if(sum == 7 ||sum == 11)wins++;
        else{
            bool kpThrw = true;
            do{
                die1 = rand() % 6 + 1;
                die2 = rand() % 6 + 1;
                avgThrw++;cntThrw++;
                char sumAgn = die1 + die2;
                if(sumAgn == 7){
                    losses++;
                    kpThrw = false;
                }else if(sumAgn == sum){
                    wins++;
                    kpThrw = false;
                }
            }while(kpThrw);
        }
        if(maxThrw < cntThrw)maxThrw = cntThrw;
    }
    
    
    //Calculate the average Throw
    avgThrw/=nGames;
    
    //Output Located Here
    out<<"The total number of Crap games played = "<<nGames<<endl;
    out<<"The total wins = "<<wins<<endl;
    out<<"The total losses = "<<losses<<endl;
    out<<"The total number of Crap games played = "<<wins + losses<<endl;
    out<<"Percentage wins = "<<static_cast<float>(PERCENT)*wins/nGames<<endl;
    out<<"Percentage wins = "<<static_cast<float>(PERCENT)*losses/nGames<<endl;
    out<<"Average number of throws per game = "<<avgThrw<<endl;
    out<<"Maximum throws = "<<maxThrw;

    //Exit
    in.close();
    out.close();
    return 0;
}