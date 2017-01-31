/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 30, 2017, 7:37 PM
 * Purpose: Baccarat Game (Project 1)
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    
    //The Player and House receive two cards each 
    //the crdint variables hold a int read in from the file to represent a
    //random card
    int crdint1, crdint2, crdint3, crdint4;
    int crdval1, crdval2, crdval3, crdval4;
    //open file containing "card deck"
    ifstream inputFile;
    inputFile.open("Cards.dat");
    
    //seeding random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    char play;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 10;
    int rand1 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
    for(int count1 = 1; count1 <= rand1; count1++){
        inputFile>>crdint1;
    }
    int rand2 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
    for(int count2 = 1; count2 <= rand1; count2++){
        inputFile>>crdint2;
    }
    int rand3 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
    for(int count3 = 1; count3 <= rand1; count3++){
        inputFile>>crdint3;
    }
    int rand4 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
    for(int count4 = 1; count4 <= rand1; count4++){
        inputFile>>crdint4;
    }
    cout<<"Your score  = "<<setw(2)<<crdval1 +crdval2<<endl;
    cout<<"House score = "<<setw(2)<<crdval3 +crdval4<<endl;
    int temp1, temp2, temp3, temp4;
    do{
        
        const int MIN_VALUE = 1;
        const int MAX_VALUE = 10;
        //each do-while and for-loop correspond to one card for four cards total
        //each time the program runs four different cards are chosen
        rand1 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        for(int count1 = 1; count1 <= rand1; count1++){
            inputFile>>crdint1;
        }
        
        rand2 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        for(int count2 = 1; count2 <= rand2; count2++){
            inputFile>>crdint2;
        }
        rand3 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        for(int count3 = 1; count3 <= rand3; count3++){
            inputFile>>crdint3;
        }
        rand4 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        for(int count4 = 1; count4 <= rand4; count4++){
            inputFile>>crdint4;
        }
        
        //reversing values read from file
        switch(crdint1){
            case 9: crdval1 = 0;break;
            case 8: crdval1 = 1;break;
            case 7: crdval1 = 2;break;
            case 6: crdval1 = 3;break;
            case 5: crdval1 = 4;break;
            case 4: crdval1 = 5;break;
            case 3: crdval1 = 6;break;
            case 2: crdval1 = 7;break;
            case 1: crdval1 = 8;break;
            case 0: crdval1 = 9;break;
        }
        switch(crdint2){
            case 9: crdval2 = 0;break;
            case 8: crdval2 = 1;break;
            case 7: crdval2 = 2;break;
            case 6: crdval2 = 3;break;
            case 5: crdval2 = 4;break;
            case 4: crdval2 = 5;break;
            case 3: crdval2 = 6;break;
            case 2: crdval2 = 7;break;
            case 1: crdval2 = 8;break;
            case 0: crdval2 = 9;break;
        }
        switch(crdint3){
            case 9: crdval3 = 0;break;
            case 8: crdval3 = 1;break;
            case 7: crdval3 = 2;break;
            case 6: crdval3 = 3;break;
            case 5: crdval3 = 4;break;
            case 4: crdval3 = 5;break;
            case 3: crdval3 = 6;break;
            case 2: crdval3 = 7;break;
            case 1: crdval3 = 8;break;
            case 0: crdval3 = 9;break;
            default:crdval3 = 0;break;
        }
        switch(crdint4){
            case 9: crdval4 = 0;break;
            case 8: crdval4 = 1;break;
            case 7: crdval4 = 2;break;
            case 6: crdval4 = 3;break;
            case 5: crdval4 = 4;break;
            case 4: crdval4 = 5;break;
            case 3: crdval4 = 6;break;
            case 2: crdval4 = 7;break;
            case 1: crdval4 = 8;break;
            case 0: crdval4 = 9;break;
            //default:crdval4 = 1;break;
        }
        
        cout<<"Your score  = "<<setw(2)<<crdval1 +crdval2<<endl;
        cout<<"House score = "<<setw(2)<<crdval3 +crdval4<<endl;
        cout<<"Play again? Press y for yes. Press any other key to quit.";
        cin>>play;
    }while(play == 'y' || play == 'Y');
    
    inputFile.close();
    return 0;
}

/*do{
            int rand3 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        }while(rand3 == temp3);
        temp3 = rand3;
 * do{
            int rand43 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        }while(rand4 == temp3);
        temp4 = rand4;
 do{
            int rand1 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        }while(rand1 == temp1);
        temp1 = rand1;
 * do{
            int rand2 = (rand() %(MAX_VALUE -MIN_VALUE +1)) +MIN_VALUE;
        }while(rand2 == temp2);
        temp2 = rand2;
 */