/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 15, 2017, 9:44 PM
 * Purpose: Minimum/Maximum
 * Write a program that asks the user to enter two numbers. The program should 
 * use the conditional operator to determine which number is the smaller and 
 * which is the larger.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int number1, number2;
    
    cout<<"This program determines which number of two you enter is"<<endl;
    cout<<"larger and which is smaller."<<endl;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<endl<<"Enter the second number: ";
    cin>>number2;
    cout<<endl;
    
    if(number1>number2)
        cout<<number1<<" is greater than "<<number2<<".";
    else
        cout<<number2<<" is greater than "<<number1<<".";
    return 0;
}

