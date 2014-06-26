/* 
 * File:   main.cpp
 * Author: Trajon Felton
 *
 * Created on June 26, 2014, 12:49 PM
 * Purpose Gaddis Chapter 3 Problem 5
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
    float plate, hits; //Number of times the player was on bat and the number of times he got a hit on plate
    float average; //Average rate of successful hits.
//Prompt For User Input   
    cout << "Enter the number of times this player was at bat" << endl;
    cin >> plate;
    cout << "Enter the number of successful hits on bat. **Note: only count hits";
    cout << "that successfully got the player on a base**" << endl;
    cin >> hits;
//Calculations   
    average = (hits / plate) * 100;
//Display Output   
    cout << setprecision(4) << fixed << showpoint << "The average successful rate of hits this player has is " << average << "%";
//Exit Stage Right  
    return 0;
}

