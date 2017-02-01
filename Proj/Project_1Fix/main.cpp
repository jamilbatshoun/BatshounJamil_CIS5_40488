
/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 31, 2017, 1:12 PM
 * Purpose: Baccarat Game Version 2 (Project 1)
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

int switchr(int);

int main(int argc, char** argv) {
    
    char again;
    //for is number of times for-loops are executed
    int for1, for2, for3, for4;
    //hold is the score of one card, score is 
    int hold1, hold2, hold3, hold4, yrScore, hsScore;
    float wins, avg, nGames = 0;
    const int MIN = 1;
    const int MAX = 10;
    string fileNme = "Cards.dat";
    ifstream inpFile;
    inpFile.open(fileNme);
    
    srand(time(0));
    
    do{
        //for variables store random numbers
        for1 = rand() %(MAX -MIN +1) +MIN;
        for2 = rand() %(MAX -MIN +1) +MIN;
        for3 = rand() %(MAX -MIN +1) +MIN;
        for4 = rand() %(MAX -MIN +1) +MIN;
        
        //files must be close from last iteration
        inpFile.close();
        
        //files are then reopened so as to start from beginning of the file
        inpFile.open(fileNme);
        
        //random number of lines to beread from file. last line determines hold1
        //value
        for(int count = 1; count < for1; count++){
            inpFile>>hold1;
        }
        hold1 = switchr(hold1);
        
        //process is repeated for hold2
        inpFile.close();
        inpFile.open(fileNme);
        for(int count = 1; count < for2; count++){
            inpFile>>hold2;
        }
        hold2 = switchr(hold2);
        
        //process is repeated for hold3        
        inpFile.close();
        inpFile.open(fileNme);
        for(int count = 1; count < for3; count++){
            inpFile>>hold3;
        }
        hold3 = switchr(hold3);
        
        //process is repeated for hold4       
        inpFile.close();
        inpFile.open(fileNme);
        for(int count = 1; count < for4; count++){
            inpFile>>hold4;
        }
        hold4 = switchr(hold4);
        
        //in baccarat, if a score is > 9 subtract 10
        yrScore = hold1 +hold2;
        hsScore = hold3 +hold4;
        if(yrScore >= 10)
            yrScore -=10;
        if(hsScore >= 10)
            hsScore -=10;
        
        cout<<" ***Your cards***\t\t***The House's cards***"<<endl;
        cout<<"       "<<hold1<<"  "<<hold2<<"\t\t\t\t  "<<hold3<<"  "<<hold4<<endl;
        cout<<" ***Your score***\t\t***The House Score***"<<endl;
        cout<<"        "<<yrScore<<"\t\t\t\t   "<<hsScore<<endl;
        if(yrScore > hsScore){
            cout<<"You win!"<<endl;
            wins++;
        }
        nGames++;
        
        avg = (wins /nGames) *100;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Odds of winning = "<<avg<<"%"<<endl;
        cout<<"Play again? Press y to play again. Press any other key to exit: ";
        cin>>again;
        cout<<endl;
    }while(again == 'y' || again == 'Y');
    cout<<"Thanks for playing!"<<endl;
    return 0;
}

//This function holds the switch operation which saves a lot of redundant code
int switchr(int holder){
    //switch simply changes holder's value
    switch(holder){
        case 9: holder = 0;break;
        case 8: holder = 1;break;
        case 7: holder = 2;break;
        case 6: holder = 3;break;
        case 5: holder = 4;break;
        case 4: holder = 5;break;
        case 3: holder = 6;break;
        case 2: holder = 7;break;
        case 1: holder = 8;break;
        case 0: holder = 9;break;
    }
    return holder;
}