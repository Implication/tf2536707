/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 26, 2014, 1:28 PM
 * Purpose: Gaddis Chapter 3 Problem 4
 */



//System Defined Libraries
#include <iostream>
using namespace std;

//User Defined Libraries


//Global Constants


//Function Prototypes



int main(int argc, char** argv) {
//Declare Variables
    unsigned int cost; //Cost to repair a home fully
    float insure;  //Amount a person should invest in insurance.
//Prompt User Input
    cout << "Enter the cost to repair your entire home: " << endl;
    cin >> cost;
//Calculations
    insure = cost * .80;
//Display output;
    cout << "The recommended amount of money to place into for insurance of your home is $" << insure;
//Exit Stage Right
    return 0;
}

