/* 
* File:   main.cpp
* Author: Trajon Felton
*
* Created on June 24, 2014, 1:11 PM
* Purpose: Gaddis Chapter 2 Problem 3
*/

//System defined libraries
#include <iostream>
using namespace std;

//User defined libraries


//Global constants


//Function Prototypes


int main(int argc, char** argv) {
   //Variable Declaration
   float stTax = 4e-2f; //State tax percentage: 4%
   float coTax = 2e-2f; //Country tax percentage: 2%
   unsigned short price = 52; //Purchase Price of the item
   float stTotal, coTotal; //Total tax amounts of State tax and Country tax
   //Calculations
   stTotal = price * stTax; //State tax amount of purchase
   coTotal = price * coTax; //Country tax amount of purchase
   //Display Output
   cout << "Purchased Amount: $" << price << endl;
   cout << "State Tax percentage: " << stTax * 100 << "%" << endl;
   cout << "Country sales Tax percentage: " << coTax * 100 << "%" << endl;
   cout << "Tax amount of purchased based on state tax: " << "$"  << stTotal << endl;
   cout << "Tax amount of purchased based on country sales tax: " << "$" << coTotal << endl;
   //Exit Stage Right
   return 0;
}


