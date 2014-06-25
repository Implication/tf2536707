/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 25, 2014, 1:05 PM
 * Purpose Gaddis Chapter 2 Problem 8
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
    unsigned int feet= 43560; //One acre of land in terms of square feet
    float meter = 10.7639; //One acre of land in terms of square meters
    short x; float y; //X is 1/4 of an acre of land in terms of feet, while Y is in terms of meters.
//Calculations
    x = feet/4;
    y = meter/4;
//Display Output
    cout << "The number of Square Feet in 1/4 acres of land is " << x << endl;
    cout << "The number of meters in 1/4 acres of land is " << y << endl;
//Exit Stage Right
    return 0;
}

