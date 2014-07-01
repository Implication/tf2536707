/* 
 * File:   main.cpp
 * Author: Trajon Felton
 * Created on July 1, 2014, 10:33 AM
 * Purpose: Gaddis Chapter 3 Problem 16
 */

//Systme Defined Libraries
#include <iostream>
#include <cstdlib> //Header file needed to use srand and rand
#include <ctime> //Header file to use time
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes


int main(int argc, char** argv) {
//Declare Variables
    unsigned seed; //Random generator seed
    unsigned short num1, num2; //Variable used to store the random generated numbers from the seed.
    unsigned short answer; //Stores the user input
//Time function used to get a value for seed
    seed = time(0);
//Set srand to seed
    srand(seed);
    //** Note numbers should not be lower than 1, or higher than 9**
   num1 = rand() % 9 + 1;  //First random generated number stored in num1
   num2 = rand() % 9 + 1;  //Second random generated number stored in num2
           
//Display Random Numbers Between 1 and 9
   cout << "Enter the sum of these 2 numbers: " << endl << endl;
   cout << " " << num1 << endl;
   cout << "+" << num2 << endl;
   cout << "----" << endl;
   cin >> answer;
//Display answer, **Note Answer should not be lower than 2 or higher than 18.
   cout << "\nThe answer is " << num1 + num2 << ".";
//Exit Stage Right
   return 0;
}

