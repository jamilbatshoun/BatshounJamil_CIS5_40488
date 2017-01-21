/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 20, 2017, 8:26 PM
 * Purpose: Math Tutor
 * This program started in Programming Challenge 17 of Chapter 3 , and was 
 * modified in Programming Challenge 11 of Chapter 4 . Modify the program again 
 * so it displays a menu allowing the user to select an addition, subtraction, 
 * multiplication, or division problem. The final selection on the menu should 
 * let the user quit the program. After the user has finished the math problem, 
 * the program should display the menu again. This process is repeated until the
 * user chooses to quit the program.
 * Input Validation: If the user selects an item not on the menu, display an 
 * error message and display the menu again.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;



//Executable code begins here!!!

int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    float x, y, answer, guess;
    
    //seed the random number generator
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100;
    srand(time(0));
    //Do-While loop
    do{
        x = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        cout<<endl<<"Choose a math problem to do."<<endl;
        cout<<"type \"a\" for an addition problem."<<endl;
        cout<<"type \"s\" for an subtraction problem."<<endl;
        cout<<"type \"m\" for an multiplication problem."<<endl;
        cout<<"type \"d\" for an division problem."<<endl;
        cout<<"type \"q\" to quit."<<endl;
        cin>>choice;
        
        if(choice == 'a'|| choice == 'A'){
           
            
            answer = x + y;
            cout<<setw(4)<<x<<endl<<"+"<<setw(3)<<y<<endl<<"_____";
            cout<<endl;
            cin>> guess;
            cout<<endl;
            if(guess == answer)
                cout<<"Correct."<<endl;
            else
                cout<<"Incorrect. The correct answer is "<<answer<<endl;
        }
        if(choice == 's'|| choice == 'S'){
            
            answer = x - y;
            cout<<setw(4)<<x<<endl<<"-"<<setw(3)<<y<<endl<<"_____";
            cout<<endl;
            cin>> guess;
            cout<<endl;
            if(guess == answer)
                cout<<"Correct."<<endl;
            else
                cout<<"Incorrect. The correct answer is "<<answer<<endl;
        }
        if(choice == 'm'|| choice == 'M'){
           
            answer = x * y;
            cout<<setw(3)<<x<<endl<<" * "<<setw(3)<<y<<endl<<" = ";
            cout<<endl;
            cin>> guess;
            cout<<endl;
            if(guess == answer)
                cout<<"Correct."<<endl;
            else
                cout<<"Incorrect. The correct answer is "<<answer<<endl;
        }
        if(choice == 'd'|| choice == 'D'){
            cout<<setprecision(2)<<fixed;
            answer = x/y;
            cout<<setw(3)<<x<<endl<<"/"<<setw(3)<<y<<endl<<" = ";
            cin>>guess;
            cout<<endl;
            if(guess == answer)
                cout<<"Correct."<<endl;
            else
                cout<<"Incorrect. The correct answer is "<<answer<<endl;
        }
        
        
    
    }while(choice != 'q' && choice != 'Q');
    //Exit stage right!
    return 0;
}