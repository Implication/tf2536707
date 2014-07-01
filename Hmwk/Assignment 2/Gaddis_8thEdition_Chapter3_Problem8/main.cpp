/* 
 * File:   main.cpp
 * Author: Trajon Felton
 * Created on June 30, 2014, 11:45 AM
 * Purpose: Gaddis Chapter 3 Problem 8
 */

//System Defined Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
    string name; //Name of the movie
    float total, profit, paid; //Total amount of money made from the movie, the profit the movie theaters makes, the amount paid to the distributor
    unsigned short cTick, aTick; //Number of tickets sold for children, Number of tickets sold for adults
//Prompt user
    cout << "Enter the name of the movie:" << endl;
    getline(cin, name); //Gets the name of the movie
    cout << "Enter the number of tickets sold for adults:" << endl;
    cin >> aTick; //Gets the number of tickets sold for adults
    cout << "Enter the number of tickets sold for children:" << endl;
    cin >> cTick; //Gets the number of tickets sold for children
    cout << sizeof(name);
//Calculations
    total = (cTick * 3) + (aTick * 6); //Calculates the total amount of gross pay, children tickets are 3 dollars, and adult tickets are 6 dollars
    profit = total * .2; //Takes the total, and multiples it by .2 to get 20% of the total amount for the Net box
    paid = total * .8; //Takes the total, and multiples it by .8 to get 80% of the toal amount for the distributor
//Display output
    cout << endl << setprecision(2) << fixed << showpoint;
    cout << left << setw(24) << "Movie Name:" <<
            right << setw(10) << "\"" << name << "\"" << endl;
    cout << left << setw(24) << "Adult Tickets Sold:" << 
            right << setw(14) << aTick << endl;
    cout << left << setw(24) << "Child Tickets Sold:" << 
            right << setw(14) << cTick << endl;
    cout << left << setw(24) << "Gross Box Office Profit:" <<
            right << setw(12) << "$" << right << setw(8) << total << endl;
    cout << left << setw(24) << "Amount Paid to Distributor:" <<
            right << setw(9) << "-$" <<  right << setw(8) << paid << endl;
    cout << left << setw(24) << "Net Box Office Profit:" <<
            right << setw(12) << "$" <<  right << setw(8) << profit << endl;
 //Exit Stage Right
    return 0;
}

