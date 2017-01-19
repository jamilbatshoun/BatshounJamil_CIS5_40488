/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 19, 2017, 10:53 AM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int salary = 1, maxDays = 30, totPay = 0; //Salary and Pay in pennies
    
    //Process by mapping inputs to outputs
    for(int day = 1; day <= maxDays; day++, salary *= 2){
        int dollars;
        int cents;
        cents = salary%100;
        dollars = (salary - cents)/100;
        cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
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

