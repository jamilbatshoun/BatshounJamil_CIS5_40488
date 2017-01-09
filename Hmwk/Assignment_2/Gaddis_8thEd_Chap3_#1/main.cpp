/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 9, 2017, 12:49 PM
 * Purpose: Miles per Gallon
 * Write a program that calculates a car’s gas mileage. The program should ask 
 * the user to enter the number of gallons of gas the car can hold and the 
 * number of miles it can  be driven on a full tank. It should then display the 
 * number of miles that may be driven per gallon of gas.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    float gasCpty;      //holds how many gallons the gas tank can take.
    float range;        //the vehicle's range on a full tank;
    
    cout<<"This program calculates your car's miles per gallon(MPG)."<<endl;
    cout<<"Enter the gas tank's capacity in gallons: ";
    cin>>gasCpty;
    cout<<"Next, enter the number of miles your car can drive on a full tank: ";
    cin>>range;
    
    cout<<"Your car gets "<<range/gasCpty<<" MPG."<<endl;
    return 0;
}

