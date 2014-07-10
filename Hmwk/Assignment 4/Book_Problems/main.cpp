/* 
 * File:   main.cpp
 * Author: Trajon Felton
 * Created on July 8, 2014, 9:25 AM
 */


//System Defined Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time>
using namespace std;

//User Defined Libraries


//Global Constants


//Function Prototypes


int main(int argc, char** argv) {
    
    unsigned short choice; //Choice made by the user to see a problem doe in the book
    char x;
    do {
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
         cout << endl;
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
            cout << "The sum of all the numbers up to " << total << " is " << sum << endl;
            break;
        }
        case 3:{ 
            //Gaddis 8th Edition Chapter 5 Problem 21
            //Declare variables
            char sym; //Symbol user wishes to output
            unsigned short lines; //Number of lines based on symmetry
            unsigned short plus = 1; //Initial increment for symbol in the code
            cout << "This program displays an arrowhead using nested loops. **I modified this for user input for the heck of it.**" << endl;
            cout << "Enter the number of lines of symmetry" << endl;
            cin >> lines;
            cout << "Enter the symbol you would like to see for this program" << endl;
            cin >> sym;
            //First part of the arrowhead.
            for(char j = 0; j < lines; j++){ //Loops until the number of lines are hit
                unsigned short spaces = 0;
                while(spaces < lines){ //First puts out  characters of blank spaces based on number of lines
                    cout << " "; 
                    spaces++;
                }
                for(short k = 0; k < plus; k++){ //Inner loop which adds the pattern after the number of spaces
                    cout << sym;
                }
                plus+=2; //Increments the character, which in this case is a character by 2
                cout << endl; //Goes to the next lines, increasing the amount of line spaces, repeating the loop
            }
            //Middle part of the arrowhead
            for(char mid = 0; mid < plus + lines; mid++){ //This prints the very middle of it, which is equal to the number of characters, + the number of lines
                cout << sym; 
            }
            cout << endl;
            //Last lines of the arrowhead
            for(char x = 0; x < lines; x++){
                unsigned short spaces = 0;
                while(spaces < lines){
                    cout << " ";
                    spaces++;
                }
                for(short k = 0; k < plus -2; k++){
                    cout << sym;
                }
                plus-=2;
                cout << endl;
            }
            break;
        }
        case 4:{
            //Gaddis 8th Edition Chapter 5 Problem 3
            //Declare variables
            unsigned short time; // time in which a vehicle travels
            float distance, speed; // Total distance the vehicle has traveled, and the speed in which the vehicle travels
            cout << "What is the speed of the vehicle in mph? ";
            cin >> speed;
            cout << "\nHow many hours hat it traveled? ";
            cin >> time;
            cout << "\nHour";
            cout << right << setw(18) << "Miles Traveled" << endl;
            cout << string(26,'-') << endl;
            //Calculate the distance in the loop
                for(unsigned short d = 1; d <= time; d++){
                    distance = speed * d;
                    cout << setw(4) << d << setw(8) << static_cast<short>(distance) << endl;
                }
            break;
        }
        case 5:{
            //Declare variables
            unsigned short kph = 40;
            cout << right << setw(6) << "KPH" << right << setw(8) << "MPH" << endl;
            cout << string(22, '-') << endl;
            for(kph; kph <= 120; kph+=5){
                unsigned short mph = kph * 0.6214;
                cout << setw(6) << kph << setw(8) << mph << endl;
            }
            break;
        }
        case 6:{
            //Gaddis 8th Edition Chapter 5 Problem 17
            unsigned short occ;
            bool isF;
            unsigned short total = 0;
            float perc;
            for(unsigned floor = 10; floor <= 16; floor++){
                if(floor != 13){
                    isF = true;
                    cout << "How many occupants are on floor " << floor << "?";
                    cin >> occ;
                    total+=occ;
                }   
            }
            perc = (total/120.0) * 100;
            cout << "This hotel has 120 suites. Out of those suites " << total << " are occupied or " << setprecision(2) 
                  << fixed << showpoint << perc << "% occupancy";
            break;
        }
        case 7:{
            
        }
    }
    cout << "Another Problem? (Press y for yes):" << endl;
    cin >> x;
    }while (x == 'y' || x == 'Y');
    return 0;
}

