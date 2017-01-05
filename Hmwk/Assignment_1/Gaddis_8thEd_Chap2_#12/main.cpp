/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 4, 2017, 12:57 PM
 * Purpose: chap 2 prob 12 "Land Calculator"
 */

#include <iostream>
using namespace std;

const int CNVACFT = 43560;

int main(int argc, char** argv) {
    
    int nAcres,nFt2;
    
    cout<<"This is a conversion program "<<endl;
    cout<<"from number of Acres to Feet squared"<<endl;
    cout<<"Input Number of Acres"<<endl;
    cin>>nAcres;
    
    nFt2=nAcres*CNVACFT;
    cout<<"The number of Acres input = "<<nAcres<<endl;
    cout<<"Equivalent to "<<nFt2<<"(ft^2)"<<endl;
            

    return 0;
}

