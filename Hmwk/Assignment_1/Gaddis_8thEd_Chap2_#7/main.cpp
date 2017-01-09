/* 
 * File:   main.cpp
 * Author: Jamil
 * Created on January 9, 2017, 12:35 PM
 * Purpose: Ocean Levels
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    float incPrYr = 1.5;   //1.5mm increase per year
    
    cout<<"The Ocean level will be "<<incPrYr*5<<"mm higher after 5 years\n";
    cout<<"The Ocean level will be "<<incPrYr*7<<"mm higher after 7 years\n";
    cout<<"The Ocean level will be "<<incPrYr*10<<"mm higher after 10 years";
    return 0;
}

