/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 12, 2017, 12:59 PM
 * Purpose: A cookie recipe calls for the following ingredients:
 * • 1.5 cups of sugar
 * • 1 cup of butter
 * • 2.75 cups of flour
 * The recipe produces 48 cookies with this amount of the ingredients. Write a 
 * program that asks the user how many cookies he or she wants to make, and then 
 * displays the number of cups of each ingredient needed for the specified 
 * number of cookies.
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
    
    //sgrprck, btrprck, and flrprck stand for sugar, butter, and flour
    //per cookie. sgreqrd, btreqrd, and flreqrd hold the ingredients required 
    //for a certain number of cookies. total will hold the number of cookies the
    //user wants to make and will be an int data type to prevent decimal places
    //from being added when it is printed to the screen.
    
    float sugar = 1.5, butter = 1, flour = 2.75, sgrprck, btrprck, flrprck,
          sgreqrd, btreqrd, flreqrd;
    int total;
    
    //Input or initialize values Here
    cout<<"This program calculates the sugar, butter, and flour required"<<endl;
    cout<<"for however many cookies you wish to make."<<endl;
    cout<<"Enter the number of cookies you want to make: ";
    cin>>total;
    
    //Process/Calculations Here
    sgrprck = sugar/48;
    btrprck = butter/48;
    flrprck = flour/48;
    
    sgreqrd = total*sgrprck;
    btreqrd = total*btrprck;
    flreqrd = total*flrprck;
    
    
    //Output Located Here
    //endl placed in lines 60 and 62 for consistency in output format
    cout<<setprecision(2)<<showpoint<<fixed<<endl;
    cout<<"You need "<<sgreqrd<<" cups of sugar, "<<btreqrd<<" cups of";
    cout<<" butter and "<<endl<<flreqrd<<" cups of flour to make "<<total;
    cout<<" cookies.";

    //Exit
    return 0;
}