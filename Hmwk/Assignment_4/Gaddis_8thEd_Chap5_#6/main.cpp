/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 20, 2017, 6:46 PM
 * Purpose: Distance Traveled
 * The distance a vehicle travels can be calculated as follows:
 * distance = speed * time
 * For example, if a train travels 40 miles per hour for 3 hours, the distance 
 * traveled is 120 miles.
 * Write a program that asks the user for the speed of a vehicle (in miles per 
 * hour) and how many hours it has traveled. The program should then use a loop 
 * to display the distance the vehicle has traveled for each hour of that time 
 * period. Here is an example of the output:
 * What is the speed of the vehicle in mph? 40
 * How many hours has it traveled? 3
 * Hour Distance Traveled
 * --------------------------------
 *  1           40
 *  2           80
 *  3           120
 * Input Validation: Do not accept a negative number for speed and do not accept
 * any value less than 1 for time traveled.
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!

int main(int argc, char** argv) {
    //Declare Variables
    float mph, time;
    
    //Input values
    cout<<"This program displays how far a vehicle has travel after "<<endl;
    cout<<"every hour of a trip."<<endl;
    cout<<"How fast (in miles per hour) was the vehicle traveling? : ";
    cin>>mph;
    cout<<endl<<"How long was the trip (must not be less than an hour)? : ";
    cin>>time;
    cout<<endl;
    
    //Input validation
    if(mph <0 || time < 1){
        cout<<"Your speed cannot be negative and your trip must at least"<<endl;
        cout<<"be an hour long. Rerun the program to try again.";
    }
    else{
        cout<<" Hour    Distance Traveled"<<endl;
        for(int count = 1; count <= time; count++){
           
            cout<<"  "<<count<<"             "<<mph*count<<endl;
        }
    }
            

    
    //Exit stage right!
    return 0;
}