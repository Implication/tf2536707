/* 
 * File:   main.cpp
 * Author: Trajon Felton
 * Created on July 8, 2014, 9:25 AM
 */


//System Defined Libraries
#include <iostream>
using namespace std;

//User Defined Libraries


//Global Constants


//Function Prototypes


int main(int argc, char** argv) {
    unsigned short choice; //Choice made by the user to see a problem doen in the book
    cout << "Enter a number from 1 through 10 to see a problem done in the book." << endl;
    cin >> choice;
    while(choice < 0 || choice > 10){
        cout << "Please enter a number from 1 to 10.";
        cin >> choice;
    }
    switch(choice){
         case 1:{
           // Gaddis 8th Edition Chapter 5 Problem 1
         char c = 32; // variable that stores the number 32
         for(c; c < 127; c++){ //Loop to display, each ASCII Character from 32 to 127
         cout << c << " ";
         if(c != 32 && c % 16 == 0){
            cout << endl;
        }
    }
    break;
    }
        case 2:{
            // Gaddis 8th Edition Chapter 5 Problem 2
            unsigned short inc = 1, total, sum =0;
            cout << "Enter a positive integer and this program will compute the factorial up to that number" << endl;
            cin >> total;
            while(total < 0){
                cout << "Please enter the number correctly. Only positive numbers." << endl;
                cin >> total;
            }
            for(inc; inc <= total; inc++){
                 sum += inc;
            }
            cout << "The sum of all the numbers up to " << total << " is " << sum;
            break;
        }
        case 3:{
            // Gaddis 8th Edition Chapter 5 Problem 21
            unsigned short test; //Input number of lines for the test
            cout << "Enter the number of lines for the pattern of a arrow";
            cin >> test;
            for(unsigned short x = 0; x < test; x++ ){
                for(unsigned short y = 0; y < )
            }
        }
    }
    return 0;
}

