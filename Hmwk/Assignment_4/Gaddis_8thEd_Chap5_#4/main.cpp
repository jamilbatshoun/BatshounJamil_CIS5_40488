/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 19, 2017, 1:35 PM
 * Purpose: Calories Burned
 * Running on a particular treadmill you burn 3.6 calories per minute. Write a 
 * program that uses a loop to display the number of calories burned after 5, 
 * 10, 15, 20, 25, and 30 minutes.
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    
    //For loop containing output
    for(float count = 5; count <= 30; count += 5){
        cout<<"After "<<count<<" minutes, you will have burned "
            <<count*3.6<<" calories."<<endl;
    }
    //Exit stage right!
    return 0;
}