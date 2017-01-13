/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 12, 2017, 3:47 PM
 * Purpose: How Many Widgets?
 * The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
 * Write a program that calculates how many widgets are stacked on a pallet, 
 * based on the total weight of the pallet. The program should ask the user how 
 * much the pallet weighs by itself and with the widgets stacked on it. It 
 * should then calculate and display the number of widgets stacked on the pallet
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    // totwght holds the weight of the pallet and widgets, palwght hold the
    //weight of the pallet, numwdgt holds the number of widgets.
    float totwght, palwght, numwdgt;
    
    cout<<"This program calculates the number of widgets on a pallet."<<endl;
    cout<<"Enter the total weight (lbs) of the pallet with widgets: ";
    cin>>totwght;
    cout<<endl;
    cout<<"Enter the weight (lbs) of the pallet without widgets: ";
    cin>>palwght;
    cout<<endl;
    
    numwdgt = (totwght - palwght)/12.5;
    
    cout<<setprecision(0);
    cout<<"There are "<<numwdgt<<" widgets on the pallet.";
    return 0;
}

