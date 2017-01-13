/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 12, 2017, 3:59 PM
 * Purpose: How Many Calories?
 * A bag of cookies holds 30 cookies. The calorie information on the bag claims 
 * that there are 10 “servings” in the bag and that a serving equals 300 
 * calories. Write a program that asks the user to input how many cookies he or 
 * she actually ate and then reports how many total calories were consumed.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //calries holds calculated number of calories consumed. numcook holds
    //the number of cookies the user ate.
    float calries, numcook;
    
    cout<<"This Program calculates the number of calories you consumed"<<endl;
    cout<<"from a bag of cookies."<<endl;
    cout<<"Enter the number of cookies you ate: ";
    cin>>numcook;
    cout<<endl;
    
    //At 30 cookies per bag, 10 servings per bag and 300 calories per serving 
    //means there are 3 cookies per serving and 100 calories per cookie.
    calries = numcook*100;
    
    cout<<"You have consumed "<<calries<<" calories!";
    return 0;
}

