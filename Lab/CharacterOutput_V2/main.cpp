/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 23, 2017, 12:17 PM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void repeat(char, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare the base;
    int base = 15, seprshn = 15;
    cout<<endl<<endl;
    for(int nLines = 1; nLines <= base; nLines++){
        repeat('*',nLines);
        repeat(' ',base - nLines);
        repeat(' ',seprshn);
        repeat('*',base - nLines + 1);
        cout<<endl;
    }
    
    //Exit
    return 0;
}

void repeat(char c, int n){
    for(int col = 1; col <= n; col++){
        cout<<c;
    }
}