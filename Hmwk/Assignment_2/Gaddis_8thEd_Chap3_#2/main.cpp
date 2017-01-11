/* 
 * File:   main.cpp
 * Author: Jamil Batshiun
 * Created on January 11, 2017, 1:31 PM
 * Purpose:  Stadium Seating
 * There are three seating categories at a stadium. For a softball game, Class A
 * seats cost $15, Class B seats cost $12, and Class C seats cost $9. Write a 
 * program that asks how many tickets for each class of seats were sold, then 
 * displays the amount of income generated from ticket sales. Format your dollar
 * amount in fixed-point notation, with two decimal places of precision, and be
 * sure the decimal point is always displayed.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float classA = 15, classB = 12, classC = 9;
    float income;
    
    //Input or initialize values Here
    cout<<"Enter the number of Class A seats sold: ";
    cin>>classA;
    cout<<endl<<"Enter the number of Class B seats sold: ";
    cin>>classB;
    cout<<endl<<"Enter the number of Class C seats sold: ";
    cin>>classC;
    
    //Process/Calculations Here
    income = (15*classA)+(12*classB)+(9*classC);
    
    //Output Located Here
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"The total income generated from sales is $"<<income<<endl;

    //Exit
    return 0;
}

