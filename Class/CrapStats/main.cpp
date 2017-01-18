/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 18, 2017, 10:36 AM
 * Purpose: Dice Statistics
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned int nGames = 100000;
    unsigned int wins = 0, losses = 0, maxThrw = 0;
    double avgThrw = 0;
    
    
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
    cout<<"The total number of Crap games played = "<<nGames<<endl;
    cout<<"The total wins = "<<wins<<endl;
    cout<<"The total losses = "<<losses<<endl;
    cout<<"The total number of Crap games played = "<<wins + losses<<endl;
    cout<<"Percentage wins = "<<100.0f*wins/nGames<<endl;
    cout<<"Percentage wins = "<<100.0f*losses/nGames<<endl;
    cout<<"Average number of throws per game = "<<avgThrw<<endl;
    cout<<"Maximum throws = "<<maxThrw<<endl;

    //Exit
    return 0;
}