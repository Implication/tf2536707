/* 
* File:   main.cpp
* Author: Trajon felton
*
* Created on June 24, 2014, 12:12 PM
* Purpose: Homework Chapter 2 Problem 2 Gaddis 8th Edition
*/

//System defined libraries
#include <iostream>
using namespace std;


//User Defined Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
   //Declared variables
   unsigned int  ecsles = 4.6e6;  //Number of Sales in the East Coast, at $4,600,000
   float revenue = 64e-2f; //Percent of Revenue gained by East Coast company, 64%
   
   //Calculations
   int total = ecsles * revenue;  //Amount of money gained by East Coast 
   //Display Output
   cout << "The total amount of revenue the East Coast will generate is $" << total;
   //Exit Stage Right
   return 0;
}
