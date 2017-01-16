/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 16, 2017, 1:43 PM
 * Purpose: Days in a Month
 * Write a program that asks the user to enter the month (letting the user enter
 * an integer in the range of 1 through 12) and the year. The program should 
 * then display the number of days in that month. Use the following criteria to 
 * identify leap years:
 * 1. Determine whether the year is divisible by 100. If it is, then it is a 
 * leap year if and only if it is divisible by 400. For example, 2000 is a leap 
 * year but 2100 is not.
 * 2. If the year is not divisible by 100, then it is a leap year if and if only
 * it is divisible by 4. For example, 2008 is a leap year but 2009 is not.
 * Here is a sample run of the program:
 * Enter a month (1-12): 2 [ Enter]
 * Enter a year: 2008 [Enter]
 * 29 days
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int month, year;
    
    cout<<"This program displays the number of days in a month in any year."
        <<endl;
    cout<<"Enter in a month using only numbers: ";
    cin>>month;
    cout<<"Enter in a year: ";
    cin>>year;
    
    if(month == 1 ||month == 3 ||month == 5 ||month == 7 ||
    month == 8 ||month == 10 || month == 12){
        cout<<"31 days";
        
    }else if(month == 4 || month == 6 || month == 9 || month == 11){
        cout<<"30 days";
        
    }else if(month == 2){
        if(year%400 == 0){
            cout<<"29 days";
             
        }else if(year%4 == 0){
            cout<<"29 days";
        
        }else{
            cout<<"28 days";
            
        }
    }
    return 0;
}

