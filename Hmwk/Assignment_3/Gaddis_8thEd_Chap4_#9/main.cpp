/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 16, 2017, 1:29 PM
 * Purpose: Change for a Dollar Game
 * Create a change-counting game that gets the user to enter the number of coins
 * required to make exactly one dollar. The program should ask the user to enter
 * the number of pennies, nickels, dimes, and quarters. If the total value of 
 * the coins entered is equal to one dollar, the program should congratulate the
 * user for winning the game. Otherwise, the program should display a message 
 * indicating whether the amount entered was more than or less than one dollar.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float pennies, nickels, dimes, quarter, total;
    
    cout<<"This program is a dollar making game. Enter in the right amount of"
        <<endl<<"each kind of change to make a dollar in order to win."<<endl;
    cout<<"Enter in any number of pennies: ";
    cin>>pennies;
    cout<<endl;
    cout<<"Enter in any number of nickels: ";
    cin>>nickels;
    cout<<endl;
    cout<<"Enter in any number of dimes: ";
    cin>>dimes;
    cout<<endl;
    cout<<"Enter in any number of quarters: ";
    cin>>quarter;
    cout<<endl;
    
    total = (pennies * .01) + (nickels * .05) + (dimes * .1) + (quarter * .25);
    
    if (total == 1)
        cout<<"You win!";
    else if (total < 1)
        cout<<"That is less than a dollar.";
    else if (total > 1)
        cout<<"That is more than a dollar.";
    
    
    return 0;
}

