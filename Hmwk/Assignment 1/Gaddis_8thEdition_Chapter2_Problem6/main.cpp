/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 25, 2014, 9:33 AM
 * Purpose: Gaddis Chapter 2 Problem 6 Hmwk
 */

//System Defined Libraries
#include <iostream>
using namespace std;

//User Defined Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
//Defined Variables
    unsigned short gal = 16; //Number of gallons a car can hold
    unsigned short miles = 350; //Number of miles that a car can travel
    unsigned short milpgal; //Number of miles a car can travel for every gallon
 //Calculations
    milpgal = miles/gal; //Calculates the number of miles a car gets per gallon
 //Display Output
    cout << "A car with " << gal << " gallons total gets " << milpgal << " miles for every gallon.";
 //Exit Stage Right
    return 0;
}

