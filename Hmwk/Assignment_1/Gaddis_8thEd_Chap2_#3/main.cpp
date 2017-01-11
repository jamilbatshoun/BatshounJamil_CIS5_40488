/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 6, 2017, 3:35 PM
 * Purpose: Sales Tax
 * Write a program that will compute the total sales tax on a $95 purchase. 
 * Assume the state sales tax is 4 percent and the county sales tax is 2 
 * percent.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float pretax = 95;
    float statetx = 0.04f;
    float counttx = 0.02f;
    
    cout<<"The total sales tax on a purchase of $95 is $";
    cout<<pretax*(statetx+counttx)<<"0.";
    
    return 0;
}

