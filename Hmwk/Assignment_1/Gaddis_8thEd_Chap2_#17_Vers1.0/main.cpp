/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 4, 2017, 12:07 PM
 * Purpose: Chap 2 prob 17 "stock calculator"
 */

#include <iostream>
using namespace std;

const unsigned char PERCENT = 100;

int main(int argc, char** argv) {
    
    unsigned char stkPrce = 35;   //cost per share
    unsigned short nShares = 750; // number of shares
    unsigned char comishn = 2;    //percent commission
    unsigned short stkPaid, comPaid, totPaid;
    
    stkPaid = stkPrce*nShares;
    comPaid = stkPaid*comishn/PERCENT;
    totPaid = stkPaid+comPaid;
    
    cout<<"Stock Price/Share = $   "<<static_cast<int>(stkPrce)<<"/share"<<endl;
    cout<<"Number of Shares  =    "<<nShares<<" Shares"<<endl;
    cout<<"Commission        =      "<<static_cast<int>(comishn)<<"%"<<endl;
    cout<<"Stock Price Paid  = $"<<stkPaid<<endl;
    cout<<"Commission Paid   = $  "<<comPaid<<endl;
    cout<<"Total Paid        = $"<<totPaid<<endl;

    return 0;
}

