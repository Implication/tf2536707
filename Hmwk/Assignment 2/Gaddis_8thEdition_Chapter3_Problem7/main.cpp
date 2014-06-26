/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 26, 2014, 12:11 PM
 * Purpose: Gaddis Chapter 3 Problem 7
 */

//System Defined Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


//User Defined Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string month1, month2, month3; //The names of the months the user wants to look into rainfall
    float rain1, rain2, rain3; //The amount of rainfall to fall onto each month with respect to the month it represents
    float total; //The total amount of rainfall for all 3 months
//Prompt User Input
    cout << "Enter the names of 3 months separated by a space, then press enter." << endl;
    cin >>month1>>month2>>month3;
    cout << "Enter the amount of rainfall for " << month1 << endl;
    cin >> rain1;
    cout << "Enter the amount of rainfall for " << month2 << endl;
    cin >> rain2;
    cout << "Enter the amount of rainfall for " << month3 << endl;
    cin >> rain3;
//Calculations
    total = (rain1 + rain2 + rain3)/3;
//Display output
    cout << "The average monthly rainfall for ";
    cout << month1 << ", " << month2 << " and, " << month3;
    cout << setprecision(2) << fixed << showpoint << " was " << total << " inches.";
    return 0;
}

