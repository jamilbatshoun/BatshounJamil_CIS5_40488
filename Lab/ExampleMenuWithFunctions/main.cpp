/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 19, 2017, 12:16 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//Function Prototypes
void prob1();
void prob2();
void prob3();


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
            case'1':{prob1();break;}
            case'2':{prob2();break;}
            case'3':{prob3();break;}
            default:
                cout<<"You are exiting the program."<<endl;
        }
        
    //Output values
    }while(choice >='1'&& choice <= '3');
    //Exit stage right!
    return 0;
}
void prob1(){
    cout<<"Inside Problem 1 function"<<endl;
}

void prob2(){
    cout<<"Inside Problem 2 function"<<endl;
}

void prob3(){
    cout<<"Inside Problem 3 function"<<endl;
}