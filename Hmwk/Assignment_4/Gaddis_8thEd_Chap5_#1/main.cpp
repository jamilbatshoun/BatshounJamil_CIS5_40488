/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 18, 2017, 12:29 PM 
 * Purpose: Sum of Numbers
 * Write a program that asks the user for a positive integer value. The program 
 * should use a loop to get the sum of all the integers from 1 up to the number 
 * entered. For example, if the user enters 50, the loop will find the sum of 1,
 * 2, 3, 4, … 50.
 * Input Validation: Do not accept a negative starting number.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float number, total = 0;
    
    //Input or initialize values Here
    cout<<"This program adds the sum of all integers from 1 to whatever"<<endl;
    cout<<"number of your choosing. Use only positive numbers."<<endl;
    cout<<"Enter your number here: ";
    cin>>number;
    cout<<endl;
    
    //Process/Calculations Here
    if(number > 0){
        for(float counter = 0;counter <= number; counter++ ){
            total += counter;
        }
        
        //Output Located Here
        cout<<total<<endl;
        cout<<othertotal;
    }else{
        cout<<"That is not a valid input. Rerun the program if you want"<<endl;
        cout<<"to try again.";
    }
   
    //Exit
    return 0;
}