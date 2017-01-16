/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 15, 2017, 11:44 PM
 * Purpose: Body Mass Index
 * Write a program that calculates and displays a person’s body mass index (BMI).
 * The BMI is often used to determine whether a person with a sedentary 
 * lifestyle is overweight or underweight for his or her height. A person’s BMI 
 * is calculated with the following formula:
 * BMI = weight * 703 / height^2
 * where weight is measured in pounds and height is measured in inches. The 
 * program should display a message indicating whether the person has optimal 
 * weight, is underweight, or is overweight. A sedentary person’s weight is 
 * considered to be optimal if his or her BMI is between 18.5 and 25. If the BMI
 * is less than 18.5, the person is considered to be underweight. If the BMI 
 * value is greater than 25, the person is considered to be overweight.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float bmi, weight, height;
    
    cout<<"This program determines your Body Mass Index (BMI)."<<endl;
    cout<<"Enter your height in inches: ";
    cin>>height;
    cout<<endl<<"Enter your weight in pounds: ";
    cin>>weight;
    
    bmi = weight * (703/(height*height));
    
    cout<<endl<<setprecision(1)<<showpoint<<fixed;
    if(bmi < 18.5)
        cout<<"Your BMI is "<<bmi<<"%, which means you are underweight.";
    else if(bmi >= 18.5 && bmi <= 25 )
        cout<<"Your BMI is "<<bmi<<"%, which means you have an optimal weight.";
    else if(bmi > 25)
        cout<<"Your BMI is "<<bmi<<"%, which means you are overweight.";

    return 0;
}

