/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 25, 2014, 9:47 AM
 * Purpose: Gaddis Chapter 2 Problem 7
 */

//System Defined Libraries
#include <iostream>
using namespace std;

//User Defined Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
//Variable Declaration
    float town = 21.5f; //Average number of miles driven in town.
    float high = 26.5f; //Average number of miles driven on the highway.
    unsigned char gal = 20; //Total number of gallons this car holds.
    unsigned short galtown; //Total Number of miles that can be driven in town.
    unsigned short galhigh; //Total Number of miles that can be driven on the highway.
//Calculations
    galtown = town * gal;
    galhigh = high * gal;
//Display Output
    cout << "The total number of miles that can be driven in town is " << galtown << " miles." << endl;
    cout << "The total number of miles that can be driven on the highway is " << galhigh << " miles.";
//Exit Stage Right
   return 0;
}

