/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 16, 2017, 12:57 PM
 * Purpose: Color Mixer
 * The colors red, blue, and yellow are known as the primary colors because they
 * cannot be made by mixing other colors. When you mix two primary colors, you 
 * get a secondary color, as shown here:
 * When you mix red and blue, you get purple.
 * When you mix red and yellow, you get orange.
 * When you mix blue and yellow, you get green.
 * Write a program that prompts the user to enter the names of two primary 
 * colors to mix. If the user enters anything other than “red,” “blue,” or 
 * “yellow,” the program should display an error message. Otherwise, the program 
 * should display the name of the secondary color that results by mixing two 
 * primary colors.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string frstclr, scndclr, newcolr;
    
    cout<<"This program can mix two of the three primary colors to make a new"
        <<endl<<"color."<<endl;
    cout<<"Enter in one of the three primary colors (blue, red, yellow): ";
    cin>>frstclr;
    cout<<endl<<"Enter a second primary color: ";
    cin>>scndclr;
    cout<<endl;
    
    if(frstclr == "blue" && scndclr =="red" || 
    frstclr == "red" && scndclr =="blue")
        cout<<"New color: purple";
    else if ((frstclr == "blue" && scndclr =="yellow" || 
    frstclr == "yellow" && scndclr =="blue"))
                cout<<"New color: green";
    else if ((frstclr == "red" && scndclr =="yellow" || 
    frstclr == "yellow" && scndclr =="red"))
                cout<<"New color: orange";
    else
        cout<<"One of your entries is not a primary color. Rerun the program"
            <<" if you want to try again.";
        
    return 0;
}