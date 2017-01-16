/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 15, 2017, 11:05 PM
 * Purpose: Areas of Rectangles
 * The area of a rectangle is the rectangle’s length times its width. Write a 
 * program that asks for the length and width of two rectangles. The program 
 * should tell the user which rectangle has the greater area, or if the areas 
 * are the same.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){
    
    int length1, length2, width1, width2, area1, area2;
    
    cout<<"This program determines which of two rectangles has the"<<endl;
    cout<<"greater area based on the lengths and widths you enter."<<endl;
    cout<<"Enter the length of rectangle 1: ";
    cin>>length1;
    cout<<endl;
    cout<<"Enter the width of rectangle 1: ";
    cin>>width1;
    cout<<endl;
    cout<<"Enter the length of rectangle 2: ";
    cin>>length2;
    cout<<endl;
    cout<<"Enter the width of rectangle 2: ";
    cin>>width2;
    cout<<endl;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if(area1 > area2)
        cout<<"Rectangle 1 has a greater area than rectangle 2"<<endl;
    else if(area2 > area1)
        cout<<"Rectangle 2 has a greater area than rectangle 1"<<endl;
    else if(area1 == area2)
        cout<<"Both rectangles have the same area."<<endl;

    return 0;
}