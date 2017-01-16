/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 15, 2017, 10:29 PM
 * Purpose: Magic Dates
 * The date June 10, 1960 is special because when we write it in the following 
 * format, the month times the day equals the year.
 * 6/10/60
 * Write a program that asks the user to enter a month (in numeric form), a day,
 * and a two-digit year. The program should then determine whether the month 
 * times the day is equal to the year. If so, it should display a message saying
 * the date is magic. Otherwise it should display a message saying the date is 
 * not magic.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //the multple variable holds the multiple of the month and day variables.
    int month, day, year, multple;
    
    cout<<"Magic years are years where if you multiply the month by the"<<endl;
    cout<<"day, you get that year as in 6/10/60. This program determines"<<endl;
    cout<<"if a date you enter is a magic date."<<endl;
    cout<<"Enter in the month in numeric form: ";
    cin>>month;
    cout<<endl<<"Enter in the day in numeric form: ";
    cin>>day;
    cout<<endl;
    cout<<"Enter in the year. Use just the last two digits(EX: 60 not 1960): ";
    cin>>year;
    cout<<endl;
    
    multple = month * day;
    
    if(multple == year)
        cout<<month<<"/"<<day<<"/"<<year<<" is a magic date.";
    else
        cout<<"That is not a magic date.";
    cout<<endl;
    return 0;
}

