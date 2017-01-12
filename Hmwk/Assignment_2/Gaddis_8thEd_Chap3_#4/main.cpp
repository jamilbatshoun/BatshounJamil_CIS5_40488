/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 11, 2017, 10:18 PM
 * Purpose: Average Rainfall
 * Write a program that calculates the average rainfall for three months. The 
 * program should ask the user to enter the name of each month, such as June or 
 * July, and the amount of rain (in inches) that fell each month. The program 
 * should display a message similar to the following: 
 * The average rainfall for June, July, and August is 6.72 inches.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    string first, second, third;        //hold the names of the months
    float fstrain, scdrain, trdrain, avg;    //holds the rain amounts
    
    cout<<"This program calculates the average rainfall during a "<<endl;
    cout<<"three month period."<<endl;
    cout<<"Enter the name of the first month: ";
    cin>>first;
    cout<<endl;
    cout<<"Enter the amount of rain (in inches) in "<<first<<": ";
    cin>>fstrain;
    cout<<endl;
    cout<<"Enter the name of the second month: ";
    cin>>second;
    cout<<endl;
    cout<<"Enter the amount of rain (in inches) in "<<second<<": ";
    cin>>scdrain;
    cout<<endl;
    cout<<"Enter the name of the third month: ";
    cin>>third;
    cout<<endl;
    cout<<"Enter the amount of rain (in inches) in "<<third<<": ";
    cin>>trdrain;
    cout<<endl;
    
    avg = (fstrain + scdrain + trdrain)/3;
    
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"The average rainfall in "<<first<<", "<<second<<", and "<<third
        <<" was "<<avg<<" inches.";
    return 0;
}

