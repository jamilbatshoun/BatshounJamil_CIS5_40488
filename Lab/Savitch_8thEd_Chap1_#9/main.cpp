/* 
  File:   main.cpp
  Author: Jamil Batshoun
  Created on January 5, 2017, 1:10 PM
  Purpose:  savitch 8th ed chap 1 prob 9
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float GRAVITY=3.2174e1f;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float time,     //time in seconds
          distnce;  //distance in feet
    
    //Input values
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<" in free-fall under earth gravity"<<endl;
    cout<<"Input the time during Free-Fall in seconds"<<endl;
    cin>>time;
    
    //Process by mapping inputs to outputs
    distnce=GRAVITY*time/2;
    
    //Output values
    cout<<"The distance fallen = "<<distnce<<" ft"<<endl;
    
    //Exit stage right!
    return 0;
}