/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 20, 2017, 6:43 PM
 * Purpose: Membership Fees Increase
 * A country club, which currently charges $2,500 per year for membership, has
 * announced it will increase its membership fee by 4% each year for the next 
 * six years. Write a program that uses a loop to display the projected rates 
 * for the next six years.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float price = 2500;
    
    //For loop for calculation and output
    for(int count = 1; count <= 6; count++){
        
        cout<<setprecision(2)<<showpoint<<fixed;
        cout<<"Year "<<count<<" membership price = $"<<price<<endl;
        price = price + (price * 0.04);
    }

    //Exit stage right!
    return 0;
}