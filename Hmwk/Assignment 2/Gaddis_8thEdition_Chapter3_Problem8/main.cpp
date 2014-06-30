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
    float total, profit, paid; //Total amount of money made from the movie, the profit the movie theature makes, the amount paid to the distrubutor
    unsigned short cTick, aTick; //Number of tickets sold for children, Number of tickets sold for adults
//Prompt user
    cout << "Enter the name of the movie:" << endl;
    getline(cin, name);
    cout << "Enter the number of tickets sold for children:" << endl;
    cin >> cTick;
    cout << "Enter the number of tickets sold for adults:" << endl;
    cin >> aTick;
//Calculations
    total = (cTick * 3) + (aTick * 6);
    profit = total * .2;
    paid = total * .8;
//Display output
    cout << endl << setprecision(2) << fixed << showpoint;
    cout << left << setw(24) << "Movie Name:" <<
            right << setw(12) << "\"" << name << "\"" << endl;
    cout << left << setw(24) << "Adult Tickets Sold:" << 
            right << setw(19) << aTick << endl;
    cout << left << setw(24) << "Child Tickets Sold:" << 
            right << setw(19) << cTick << endl;
    cout << left << setw(24) << "Gross Box Office Profit:" <<
            right << setw(16) << "$" << total << endl;
    cout << left << setw(24) << "Amount Paid to Distributor:" <<
            right << setw(13) << "$" << paid << endl;
    cout << left << setw(24) << "Net Box Office Profit:" <<
            right << setw(16) << "$" << profit << endl;
    return 0;
}

