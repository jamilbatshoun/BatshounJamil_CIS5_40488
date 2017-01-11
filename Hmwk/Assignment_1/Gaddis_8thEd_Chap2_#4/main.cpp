/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 6, 2017, 3:56 PM
 * Purpose: Restaurant Bill
 * Write a program that computes the tax and tip on a restaurant bill for a 
 * patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal 
 * cost. The tip should be 20 percent of the total after adding the tax. Display
 * the meal cost, tax amount, tip amount, and total bill on the screen.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float mealcst = 88.67f;   //meal cost
    float taxprct = 6.75e-2f; //tax percentage
    float tipprct = 2.00e-1f; //tip percentage
    float ttlbill,taxamnt,tipamnt;
    
    taxamnt = taxprct*mealcst;                     //Calculating and rounding
    int temp = taxamnt*100+0.5;                    //the amount of tax
    taxamnt = temp/100.0f;
    
    tipamnt = (mealcst+(taxprct*mealcst))*tipprct; //Calculating and rounding
    temp = tipamnt*100+0.5;                        //the amount of tip
    tipamnt = temp/100.0f;
    
    ttlbill = mealcst+taxamnt+tipamnt;
    
    cout<<"The meal cost is  $"<<mealcst<<"."<<endl;
    cout<<"The tax owed is   $"<<taxamnt<<"."<<endl;
    cout<<"The tip amount is $"<<tipamnt<<"."<<endl;
    cout<<"The total bill is $"<<ttlbill<<"."<<endl;
    
    return 0;
}

