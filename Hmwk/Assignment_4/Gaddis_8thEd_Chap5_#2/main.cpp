/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 18, 2017, 12:56 PM
 * Purpose: Characters for the ASCII Codes
 * Write a program that uses a loop to display the characters for the ASCII 
 * codes 0 through 127. Display 16 characters on each line.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Output Located Here
    cout<<"----------ASCII Table----------";
    
    for(int count = 0; count <= 127; count++){
        
        if(count > 32)
            cout<<static_cast<char>(count)<<" ";
        if(count%16 == 0 && count > 2)
            cout<<endl;
    }
    
    cout<<endl<<"Cannot figure out how to print codes 0 through 32."<<endl;
    //Exit
    return 0;
}