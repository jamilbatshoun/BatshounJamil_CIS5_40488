/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 31, 2017, 1:12 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int random(int min, int max);

int main(int argc, char** argv) {
    
    char again;
    int for1, for2, for3, for4;
    int hold1, hold2, hold3, hold4, yrScore, hsScore;
    int min = 1;
    int max = 10;
    string fileName = "Cards.dat";
    ifstream inputFile;
    inputFile.open(fileName);
    
    srand(time(0));
    do{
        for1 = random(min, max);
        for2 = rand() %(max -min +1) +min;
        for3 = rand() %(max -min +1) +min;
        for4 = rand() %(max -min +1) +min;
        
        //hold1 var
        inputFile.close();
        inputFile.open(fileName);
        for(int count = 1; count < for1; count++){
            
            inputFile>>hold1;
        }
        switch(hold1){
            case 9: hold1 = 0;break;
            case 8: hold1 = 1;break;
            case 7: hold1 = 2;break;
            case 6: hold1 = 3;break;
            case 5: hold1 = 4;break;
            case 4: hold1 = 5;break;
            case 3: hold1 = 6;break;
            case 2: hold1 = 7;break;
            case 1: hold1 = 8;break;
            case 0: hold1 = 9;break;
        }
        
        inputFile.close();
        inputFile.open(fileName);
        for(int count = 1; count < for2; count++){
            
            inputFile>>hold2;
        }
        switch(hold2){
            case 9: hold2 = 0;break;
            case 8: hold2 = 1;break;
            case 7: hold2 = 2;break;
            case 6: hold2 = 3;break;
            case 5: hold2 = 4;break;
            case 4: hold2 = 5;break;
            case 3: hold2 = 6;break;
            case 2: hold2 = 7;break;
            case 1: hold2 = 8;break;
            case 0: hold2 = 9;break;
        }
        inputFile.close();
        inputFile.open(fileName);
        for(int count = 1; count < for3; count++){
            
            inputFile>>hold3;
        }
        switch(hold3){
            case 9: hold3 = 0;break;
            case 8: hold3 = 1;break;
            case 7: hold3 = 2;break;
            case 6: hold3 = 3;break;
            case 5: hold3 = 4;break;
            case 4: hold3 = 5;break;
            case 3: hold3 = 6;break;
            case 2: hold3 = 7;break;
            case 1: hold3 = 8;break;
            case 0: hold3 = 9;break;
        }
        inputFile.close();
        inputFile.open(fileName);
        for(int count = 1; count < for4; count++){
            
            inputFile>>hold4;
        }
        switch(hold4){
            case 9: hold4 = 0;break;
            case 8: hold4 = 1;break;
            case 7: hold4 = 2;break;
            case 6: hold4 = 3;break;
            case 5: hold4 = 4;break;
            case 4: hold4 = 5;break;
            case 3: hold4 = 6;break;
            case 2: hold4 = 7;break;
            case 1: hold4 = 8;break;
            case 0: hold4 = 9;break;
        }
        yrScore = hold1 +hold2;
        hsScore = hold3 +hold4;
        if(yrScore >= 10)
            yrScore -=10;
        if(hsScore >= 10)
            hsScore -=10;
        
        cout<<yrScore<<" "<<hsScore<<endl;
        cout<<"Again? ";
        cin>>again;
        cout<<endl;
    }while(again == 'y' || again == 'Y');
    return 0;
}

int random(int min, int max){
    return rand() %(max -min +1) +min;
}