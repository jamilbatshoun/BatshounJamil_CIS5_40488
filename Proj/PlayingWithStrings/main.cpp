/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on February 8, 2017, 12:42 PM
 * Purpose:
 */

#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main(int argc, char** argv) {

    string array[2][5] = {{"Ace ", "Queen "},{"of Spades","of Diamonds"}};
    
    cout<<array[0][0]<<array[1][0]<<endl;
    cout<<array[0][1]<<array[1][1]<<endl;
    return 0;
}

