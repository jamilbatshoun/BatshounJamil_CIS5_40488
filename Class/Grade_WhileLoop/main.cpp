/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 17, 2016,11:09 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned short score;
    char grade, numStd = 20, student = 1;
    unsigned short average = 0;
    //Input or initialize values Here
    cout<<"This program assigns the score and outputs the grade for "
            <<static_cast<int>(numStd)<<" students"<<endl;
    
    //Loop for each student
    while(student++ <= numStd){
    //Assign a grade
        unsigned short score = rand()%50+50;
        average+=score;
        //process by mapping inputs to outputs
        char grade = (score >= 90)?'A':
            (score >= 80)?'B':
            (score >= 70)?'C':
            (score >= 60)?'D':'F';
    //Output Located Here
        cout<<"Student "<<static_cast<int>(student)<<" has score "<<score
                <<" = "<<grade<<endl;
        
    }
    average/=numStd;
    cout<<"The average test score = "<<average<<endl;
    
    //Exit
    return 0;
}

