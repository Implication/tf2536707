/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 26, 2014, 10:25 AM
 * Purpose Gaddis Chapter 3 Problem 2
 */

//System Defined Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Defined Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    char a = 15, b = 12, c = 9; //Cost of seats in Class A for $15, Class B for $12, and Class  C for $9
    unsigned short ticketA, ticketB, ticketC; //Total amount of tickets sold at the game
    unsigned int total;
//Prompt for user input
    cout << "Enter the total amount of tickets sold that were Class A seats: ";
    cin >> ticketA;
    cout << "\nEnter the total amount of tickets sold that were Class B seats: ";
    cin >> ticketB;
    cout << "\nEnter the total amount of tickets sold that were Class C seats: ";
    cin >> ticketC;
//Calculations
    total = (a * ticketA) + (b * ticketB) + (c * ticketC);
//Display output
    cout << setprecision(2) << fixed << showpoint <<  "The total amount of income generated from the number of tickets sold is $" << total;
//Exit Stage Right
    return 0;
}

