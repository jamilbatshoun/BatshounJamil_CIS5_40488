/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    
    //Declare Variables
    char choice;
    
    //Input values
    do{
        
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem with For"<<endl;
        cin>>choice;

        //Switch to determine the problem
        switch(choice){
            case'1':{
                cout<<"You are in case 1."<<endl;
                break;
            }
            case'2':{
                cout<<"You are in case 2."<<endl;

                break;
            }
            case'3':{
                cout<<"You are in case 3."<<endl;

                break;
            }
            default:
                cout<<"You are exiting the program."<<endl;
        }
        
    //Output values
    }while(choice >='1'&& choice <= '3');
    //Exit stage right!
    return 0;
}