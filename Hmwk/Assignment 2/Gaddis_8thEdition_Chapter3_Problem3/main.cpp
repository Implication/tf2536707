/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 26, 2014, 11:09 AM
 * Purpose: Gaddis Chapter 3 Problem 3
 */


//System Defined Libraries
#include <iostream>
using namespace std;


//User Defined Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    unsigned short rent, phone, cable, utility; //Cost of the rent or mortgage payment, utilities, phone, and cable bills for every month
    unsigned short totalM; //the total monthly cost of all housing expenses
    unsigned int totalA; //the total annual cost of all housing expenses
//Prompt User Input
    cout << "Enter the cost for rent: " << endl;
    cin >> rent;
    cout << "Enter the cost for cable: " << endl;
    cin >> cable;
   cout << "Enter the cost for phone: " << endl;
    cin >> phone;
    cout << "Enter the cost for utilities: " << endl;
    cin >> utility;
//Calculations
    totalM = rent + phone + cable + utility;
    totalA = 12 * totalM;
//Display output
    cout << "The total monthly cost of your housing expenses is $" << totalM << endl;
    cout << "and the total annual cost of your housing expenses is $" << totalA << endl;
//Exit Stage Right
    return 0;
}

