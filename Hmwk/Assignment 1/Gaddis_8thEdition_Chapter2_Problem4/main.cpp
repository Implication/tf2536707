/*
* File:   main.cpp
* Author: Trajon Felton
*
* Created on June 24, 2014, 1:45 PM
* Gaddis Chapter 2 Problem 4
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
//Variable Declaration
   float price = 44.50f; //Price of the meal without adding tax
   float P = 6.75e-2f; //Tax Percentage of the meal
   float total; //Total cost of the meal with tax added
   float tip; //Amount of a proper tip to a waiter/waitress
   float tax; //Amount of tax to be added to the meal cost
//Calculations
   tax = price * P;
   total = price + tax;
   tip = total * .15;
//Display Output
   cout << fixed << showpoint << setprecision(2)  << "Meal Cost: $" << price << endl;
   cout << "Tax amount: $" << tax << endl;
   cout << "Tip amount: $" << tip << endl;
   cout << "Total bill: $" << total << endl;
//Exit Stage Right
   return 0;
}