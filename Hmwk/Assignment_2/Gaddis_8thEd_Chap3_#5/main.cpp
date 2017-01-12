/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 12, 2017, 12:47 PM
 * Purpose:  Male and Female Percentages
 * Write a program that asks the user for the number of males and the number of 
 * females registered in a class. The program should display the percentage of 
 * males and females in the class.
 * Hint: Suppose there are 8 males and 12 females in a class. There are 20 
 * students in the class. The percentage of males can be calculated as 8 ÷ 20 = 
 * 0.4, or 40%. The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 
 * 60%.
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
    
    //Declare all Variables Here
    float boys, girls, total, boyprct, grlprct;
    
    //Input or initialize values Here
    cout<<"This program calculates the percentages of boys and girls in "<<endl;
    cout<<"a classroom's population."<<endl;
    cout<<"Enter the number of boys in the class: ";
    cin>>boys;
    cout<<"Now enter the number of girls in the class: ";
    cin>>girls;
    cout<<endl;
    //Process/Calculations Here
    total = boys + girls;
    boyprct = (boys/total)*100;
    grlprct = (girls/total)*100;
    
    //Output Located Here
    cout<<"The percentage of boys in the class is "<<boyprct<<"% and"<<endl;
    cout<<"The percentage of girls is "<<grlprct<<"%.";
    //Exit
    return 0;
}

