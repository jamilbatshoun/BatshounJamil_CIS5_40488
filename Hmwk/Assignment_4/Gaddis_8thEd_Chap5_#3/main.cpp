/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 18, 2017, 1:34 PM
 * Purpose: Ocean Levels
 * Assuming the ocean’s level is currently rising at about 1.5 millimeters per 
 * year, write a program that displays a table showing the number of millimeters
 * that the ocean will have risen each year for the next 25 years.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int years = 25;
    float total = 0;
    for(int count = 1; count <=25; count++){
        
        total += 1.5;
        cout<<"The ocean will rise "<<total<<" millimeters after "<<count
                <<" years."<<endl;
    }
    
    //Exit
    return 0;
}