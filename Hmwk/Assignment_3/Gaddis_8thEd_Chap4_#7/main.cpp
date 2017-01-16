/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 16, 2017, 12:47 PM
 * Purpose: Time Calculator
 * Write a program that asks the user to enter a number of seconds.
 * • There are 60 seconds in a minute. If the number of seconds entered by the 
 * user is greater than or equal to 60, the program should display the number of
 * minutes in that many seconds.
 * • There are 3,600 seconds in an hour. If the number of seconds entered by the 
 * user is greater than or equal to 3,600, the program should display the number
 * of hours in that many seconds.
 * • There are 86,400 seconds in a day. If the number of seconds entered by the 
 * user is greater than or equal to 86,400, the program should display the 
 * number of days in that many seconds.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float seconds;
    
    cout<<"This program will show you how many minutes, hours or days are in"
        <<endl<<"the number of seconds you enter.";
    cout<<"Enter in the number of seconds you wish to convert: ";
    cin>>seconds;
    cout<<endl;
    cout<<setprecision(2)<<showpoint<<fixed;
    
    if(seconds < 3600)
        cout<<"There are "<<seconds/60<<" minutes in that many seconds.";
    else if(seconds >= 3600 && seconds < 86400)
        cout<<"There are "<<seconds/3600<<" hours in that many seconds.";
    else if(seconds > 86400)
        cout<<"There are "<<seconds/86400<<" days in that many seconds.";
    return 0;
}

