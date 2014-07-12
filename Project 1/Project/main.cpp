/* 
 * File:   main.cpp
 * Author: Trajon Fetlon
 * Created on July 10, 2014, 1:31 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char seed; //Needed to generate random results
    seed = time(0); //Set seed equal to time based on seconds from 1970
    srand(seed); //places the number in the random generator
    
    char in; //User input based on the first letter of the animal
    //Output directions for the game
    cout << "Welcome to the game Animal Kingdom. This ever changing game" << endl;
    cout << "was made with the thought of rock paper scissors in mind. For the purpose" << endl;
    cout << "of this game, we will use the tiger a bear, and a wolf. Wolves dominates bears, Bears" << endl;
    cout << "dominate Tigers and Tigers dominate Wolves. You need to compete with the AI 5 times in order" << endl;
    cout << "to win. If the AI however manages to defeat you 5 times then you lose. Now lets begin the game!" << endl << endl;
    
    
    return 0;
}

