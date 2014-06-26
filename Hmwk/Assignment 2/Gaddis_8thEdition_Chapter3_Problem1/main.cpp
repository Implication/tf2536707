/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 26, 2014, 9:49 AM
 * Purpose: Gaddis Chapter 3 Problem 1
 */

//System Defined Libraries
#include <iostream>
using namespace std;

//User Defined Libraries


//Global Constants


//Function ProtoTypes




//Function Exection Begins Here
int main(int argc, char** argv) {
//Variable Declaration
    unsigned short gas;  //Total amount of gas a car can hold
    unsigned short mile; //Amount of miles a car can drive on a full tank of gas
    unsigned short mpg; //Amount of miles driven for every gallon
//Prompt for user input
    cout << "Enter the total amount of gas your car can hold: ";
    cin >> gas;
    cout << "\nEnter the total amount of miles your car can drive on a full tank of gas: ";
    cin >> mile;
 //Calculations
    mpg = mile/gas;
 //Display output
    cout << "\nThe amount of miles this car can get on a full tank of gas is " << mpg << " miles per gallon.";
//Exit Stage Right
     return 0;
}

