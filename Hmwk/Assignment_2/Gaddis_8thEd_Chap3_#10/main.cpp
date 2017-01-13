/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 13, 2017, 4:10 PM
 * Purpose: How Much Insurance?
 * Many financial experts advise that property owners should insure their homes 
 * or buildings for at least 80 percent of the amount it would cost to replace 
 * the structure. Write a program that asks the user to enter the replacement 
 * cost of a building and then displays the minimum amount of insurance he or 
 * she should buy for the property.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //rqmdAmt holds the calculated recommended amount of coverage, prtyVle
    //is the property value of the buildings the user is insuring.
    float rcmdAmt, prtyVle;
    
    cout<<"This program calculates the recommended amount of coverage"<<endl;
    cout<<"you should get to insure your property."<<endl;
    cout<<"Please enter the value of the property you wish to insure: ";
    cin>>prtyVle;
    cout<<endl;
    
    rcmdAmt = prtyVle*.8;
    
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"You should purchase a policy worth $"<<rcmdAmt;
    return 0;
}

