/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 19, 2017, 10:53 AM
 * Purpose: Pennies for Pay
 * Write a program that calculates how much a person would earn over a period of
 * time if his or her salary is one penny the first day and two pennies the 
 * second day, and continues to double each day. The program should ask the user
 * for the number of days. Display a table showing how much the salary was for 
 * each day, and then show the total pay at the end of the period. The output 
 * should be displayed in a dollar amount, not the number of pennies.
 * Input Validation: Do not accept a number less than 1 for the number of days 
 * worked.
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int salary = 1, maxDays, totPay = 0; //Salary and Pay in pennies
    
    //Input
    cout<<"This program calculates how much money you would make if you"<<endl;
    cout<<"worked a job where you were paid a penny the first day"<<endl;
    cout<<"which then doubled every day after."<<endl;
    cout<<"How many days did you work? : ";
    cin>>maxDays;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    for(int day = 1; day <= maxDays; day++, salary *= 2){
        int dollars;
        int cents;
        cents = salary%100;
        dollars = (salary - cents)/100;
        cout<<"Salary for day    "<<day<<" = $"<<dollars<<"."
            <<(cents < 10?'0':'\0')<<cents<<endl;
        totPay+=salary;
        cents = totPay%100;
        dollars = (totPay - cents)/100;
        cout<<"Total pay for day "<<day<<" = $"<<dollars<<"."
            <<(cents < 10?'0':'\0')<<cents<<endl<<endl;
    }
    //Predicting the result
    double salLDay = (pow(2, maxDays-1)/100);
    double totLDay = (pow(2, maxDays)-1)/100;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Final Salary predicted = $"<<salLDay<<endl;
    cout<<"Final Total Pay predicted = $"<<totLDay<<endl;
    
    //Exit
    return 0;
}

