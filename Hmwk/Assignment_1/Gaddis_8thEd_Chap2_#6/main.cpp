/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 9, 2016, 12:25 PM
 * Purpose: Annual Pay
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int payAmount,payPeriods,annualPay;
    
    //Input or initialize values Here
    payAmount = 2200;
    payPeriods = 26;
    
    //Process/Calculations Here
    annualPay = payAmount*payPeriods;
    
    //Output Located Here
    cout<<"An employee's annual pay at 26 pay periods and $2,200 per pay"<<endl;
    cout<<"period is $"<<annualPay;
    //Exit
    return 0;
}

