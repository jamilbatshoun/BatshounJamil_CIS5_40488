/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 12, 2017, 1:33 PM
 * Purpose: Box Office
 * A movie theater only keeps a percentage of the revenue earned from ticket 
 * sales. The remainder goes to the movie distributor. Write a program that 
 * calculates a theater’s gross and net box office profit for a night. The 
 * program should ask for the name of the movie, and how many adult and child 
 * tickets were sold. (The price of an adult ticket is $10.00 and a child’s 
 * ticket is $6.00.) It should display a report similar to
 * Movie Name: “Wheels of Fury”
 * Adult Tickets Sold: 382
 * Child Tickets Sold: 127
 * Gross Box Office Profit: $ 4582.00
 * Net Box Office Profit: $ 916.40
 * Amount Paid to Distributor: $ 3665.60
 * NOTE: Assume the theater keeps 20 percent of the gross box office profit.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    //string holds the movie name. adTckts and chTckts hold the number of
    //adult and child tickets sold. gProfit and nProfit hold the gross and net
    //profit. payDist is what is owed to the distributor.
    string movie;
    int adTckts, chTckts;
    float gProfit, nProfit, payDist;
    
    //Input or initialize values Here
    cout<<"This program generates a report on a particular movie's "<<endl;
    cout<<"profitability."<<endl;
    cout<<"Enter the name of the movie: ";
    getline(cin,movie);
    cout<<endl<<"Enter the number of adult tickets sold: ";
    cin>>adTckts;
    cout<<endl<<"Enter the number of child tickets sold: ";
    cin>>chTckts;
    cout<<endl;
    
    //Process/Calculations Here
    gProfit = (10*adTckts)+(6*chTckts);
    nProfit = gProfit*.2;
    payDist = gProfit - nProfit;
    
    //Output Located Here
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"Movie Name:                  "<<setw(10)<<"\""<<movie<<"\""<<endl;
    cout<<"Adult Tickets Sold:          "<<setw(10)<<adTckts<<endl;
    cout<<"Child Tickets Sold:          "<<setw(10)<<chTckts<<endl;
    cout<<"Gross Box Office Profit:     "<<setw(10)<<"$"<<gProfit<<endl;
    cout<<"Net Box Office Profit:       "<<setw(10)<<"$"<<nProfit<<endl;
    cout<<"Amount Paid to Distributor:  "<<setw(10)<<"$"<<payDist<<endl;
    
    //Exit
    return 0;
}
