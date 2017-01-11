

/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 6, 2017, 1:54 PM
 * Purpose: Sales Prediction
 * The East Coast sales division of a company generates 58 percent of total 
 * sales. Based on that percentage, write a program that will predict how much 
 * the East Coast division will generate if the company has $8.6 million in 
 * sales this year.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float percent = .58f;
    float total = 8.6f;
    
    cout<<"The East Coast division will generate $"<<percent*total<<" million";
    cout<<" this year.";
    return 0;
}

