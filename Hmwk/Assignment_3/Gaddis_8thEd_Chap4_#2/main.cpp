/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 15, 2017, 9:56 PM
 * Purpose: Roman Numeral Converter
 * Write a program that asks the user to enter a number within the range of 1 
 * through 10. Use a switch statement to display the Roman numeral version of 
 * that number. Input Validation: Do not accept a number less than 1 or greater 
 *  10.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int number;
    
    cout<<"This program converts numbers from 1 to 10 into Roman numeral"<<endl;
    cout<<"notation."<<endl;
    cout<<"Enter in a number from 1 to 10: ";
    cin>>number;
    cout<<endl;
    
    if(number >= 1 && number <= 10){
        if(number == 1)
            cout<<"1 in Roman numeral notation is I";
        if(number == 2)
            cout<<"2 in Roman numeral notation is II";
        if(number == 3)
            cout<<"3 in Roman numeral notation is III";
        if(number == 4)
            cout<<"4 in Roman numeral notation is IV";
        if(number == 5)
            cout<<"5 in Roman numeral notation is V";
        if(number == 6)
            cout<<"6 in Roman numeral notation is VI";
        if(number == 7)
            cout<<"7 in Roman numeral notation is VII";
        if(number == 8)
            cout<<"8 in Roman numeral notation is VIII";
        if(number == 9)
            cout<<"9 in Roman numeral notation is IX";
        if(number == 10)
            cout<<"10 in Roman numeral notation is X";
    }else{
        cout<<"That number is not in the correct range. Rerun the program"<<endl;
        cout<<"if you want to try again.";
    }
    return 0;
}

