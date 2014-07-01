/* 
 * File:   main.cpp
 * Author: Trajon Felton
 * Created on July 1, 2014, 10:11 AM
 * Purpose: Gaddis Chapter 3 Problem 9
 */


//System Directed Libraries
#include <iostream>
using namespace std;


//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare variables
    unsigned short widget;
    float oldPal, newPal;
//Prompt input
    cout << "Enter the weight of the pallet itself:" << endl;
    cin >> oldPal;
    cout << "Enter the total weight of the pallet with the widgets on top of it:" << endl;
    cin >> newPal;
//Calculations
    widget = (newPal - oldPal) / 9.2;
//Display output
    cout << "The total number of widgets on top of the pallet is about" << widget << ".";
//Exit Stage Right
    return 0;
}

