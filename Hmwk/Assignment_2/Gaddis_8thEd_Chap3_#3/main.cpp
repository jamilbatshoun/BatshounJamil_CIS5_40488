/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 11, 2017, 9:20 PM
 * Purpose: Test Average
 * Write a program that asks for five test scores. The program should calculate 
 * the average test score and display it. The number displayed should be 
 * formatted in fixed-point notation, with one decimal point of precision.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    float score1,score2,score3,score4,score5, avg;
    
    cout<<"This program calculates the average of 5 test scores."<<endl;
    cout<<"Enter the first test score: ";
    cin>>score1;
    cout<<endl;
    cout<<"Enter the second test score: ";
    cin>>score2;
    cout<<endl;
    cout<<"Enter the third test score: ";
    cin>>score3;
    cout<<endl;
    cout<<"Enter the fourth test score: ";
    cin>>score4;
    cout<<endl;
    cout<<"Enter the fifth test score: ";
    cin>>score5;
    cout<<endl;
    
    avg = (score1+score2+score3+score4+score5)/5;
    
    cout<<setprecision(1)<<showpoint<<fixed;
    cout<<"The average test score was "<<avg;
    return 0;
}

