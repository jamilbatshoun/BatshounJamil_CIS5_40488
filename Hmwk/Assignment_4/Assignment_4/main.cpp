/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on January 21, 2017, 12:30 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>   //Math Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 2"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        
        
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                //Declare all Variables Here
                float number, total = 0;

                //Input or initialize values Here
                cout<<"This program adds the sum of all integers from 1 to whatever"<<endl;
                cout<<"number of your choosing. Use only positive numbers."<<endl;
                cout<<"Enter your number here: ";
                cin>>number;
                cout<<endl;

                //Process/Calculations Here
                if(number > 0){
                    float othertotal;
                    for(float counter = 0;counter <= number; counter++ ){
                        total += counter;
                    }

                    //Output Located Here
                    cout<<total<<endl;
                    cout<<othertotal;
                }else{
                    cout<<"That is not a valid input. Rerun the program if you want"<<endl;
                    cout<<"to try again.";
    }
                break;
            }
            case '2':{
                            //Output Located Here
                cout<<"----------ASCII Table----------";

                for(int count = 0; count <= 127; count++){

                    if(count > 32)
                        cout<<static_cast<char>(count)<<" ";
                    if(count%16 == 0 && count > 2)
                        cout<<endl;
                }

                cout<<endl<<"Cannot figure out how to print codes 0 through 32."<<endl;
                break;
            }
            case '3':{
                //Declare all Variables Here
                int years = 25;
                float total = 0;
                for(int count = 1; count <=25; count++){

                    total += 1.5;
                    cout<<"The ocean will rise "<<total<<" millimeters after "<<count
                            <<" years."<<endl;
                }
                break;
            }
            case '4':{
                //For loop containing output
                for(float count = 5; count <= 30; count += 5){
                    cout<<"After "<<count<<" minutes, you will have burned "
                        <<count*3.6<<" calories."<<endl;
                }
                break;
            }
            case '5':{
                            //Declare Variables
                float price = 2500;

                //For loop for calculation and output
                for(int count = 1; count <= 6; count++){

                    cout<<setprecision(2)<<showpoint<<fixed;
                    cout<<"Year "<<count<<" membership price = $"<<price<<endl;
                    price = price + (price * 0.04);
    }
                
                break;
            }
            case '6':{
                //Declare Variables
                float mph, time;

                //Input values
                cout<<"This program displays how far a vehicle has travel after"<<endl;
                cout<<"every hour of a trip."<<endl;
                cout<<"How fast (in miles per hour) was the vehicle traveling? : ";
                cin>>mph;
                cout<<endl<<"How long was the trip (must not be less than an hour)? : ";
                cin>>time;
                cout<<endl;

                //Input validation
                if(mph <0 || time < 1){
                    cout<<"Your speed cannot be negative and your trip must at least"<<endl;
                    cout<<"be an hour long. Rerun the program to try again.";
                }
                else{
                    cout<<" Hour    Distance Traveled"<<endl;
                    for(int count = 1; count <= time; count++){

                        cout<<"  "<<count<<"             "<<mph*count<<endl;
                    }
                }
                break;
            }
            case '7':{
                //Declare all Variables Here
                int salary = 1, maxDays, totPay = 0; //Salary and Pay in pennies

                //Input
                cout<<"This program calculates how much money you would make if you"<<endl;
                cout<<"worked a job where you were paid a penny the first day"<<endl;
                cout<<"which then doubled every day after."<<endl;
                cout<<"How many days did you work? : ";
                cin>>maxDays;
                cout<<endl;

                //Process by mapping inputs to outputs
                for(int day = 1; day <= maxDays; day++, salary *= 2){
                    int dollars;
                    int cents;
                    cents = salary%100;
                    dollars = (salary - cents)/100;
                    cout<<"Salary for day    "<<day<<" = $"<<dollars<<"."
                        <<(cents < 10?'0':'\0')<<cents<<endl;
                    totPay+=salary;
                    cents = totPay%100;
                    dollars = (totPay - cents)/100;
                    cout<<"Total pay for day "<<day<<" = $"<<dollars<<"."
                        <<(cents < 10?'0':'\0')<<cents<<endl<<endl;
                }
                //Predicting the result
                double salLDay = (pow(2, maxDays-1)/100);
                double totLDay = (pow(2, maxDays)-1)/100;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Final Salary predicted = $"<<salLDay<<endl;
                cout<<"Final Total Pay predicted = $"<<totLDay<<endl;
                break;
            }
            case '8':{
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
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}