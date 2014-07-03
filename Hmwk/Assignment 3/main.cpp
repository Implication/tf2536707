/* 
 * File:   main.cpp
 * Author: Trajon Felton
 * Created on July 3, 2014, 12:13 PM
 */


//System Defined Libraries
#include <iostream>
using namespace std;

//User Defined Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
 unsigned short choice;
 cout << "Enter the problem you wish to see from 1 to 10. " << endl;
 cin >> choice;
 
 while(choice < 1 || choice > 10){
     cout << "Invalid input. Please enter a number from 1 to 10" << endl;
     cin >> choice;
 }
 switch(choice){
     case 1:{
//Gaddis 8th Edition Chapter 4 Problem 1
//Inputs
    unsigned short num1, num2; //Stores values of 2 numbers based on user input
//Get user input for numbers
    cout << "\nEnter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
//Conditional Statement
    if(num1 == num2){ //Checks whether the first number is equal to the second number
        cout << num1 << " is equal to " << num2;
    }
    else if(num1 < num2){//Checks whether the first number is less then the second number
        cout << num1 << " is less than " << num2;
    }
    else{ // Check whether the first number is less than the second number
        cout << num1 << " is greater than " << num2;
    }
    break;
   }
     case 2:{
//Gaddis 8th Edition Chapter 4 Problem 2
//Inputs
         unsigned short num; //Stores a numerical number based on user input
//Get User Input
         cout << "\nEnter a number from 1 to 10 and I will show you its Roman numeral version: " << endl;
         cin >> num;
//Switch case
         switch(num){
             case 1:{
                 cout << "The roman numeral for " << num << " is I ";
                 break;
             }
             case 2:{
               cout << "The roman numeral for " << num << " << is II";
                 break;
             }
             case 3:{
                 cout << "The roman numeral for " << num << "  is III";
                 break;
             }
             case 4:{
                 cout << "The roman numeral for " << num << " is IV";
                 break;
             }
             case 5:{
                 cout << "The roman numeral for " << num << " is V";
                 break;
             }
             case 6:{
                 cout << "The roman numeral for " << num  << " is VI";
                 break;
             }
             case 7:{
                 cout << "The roman numeral for " << num  << " is VII";
                 break;
             }
             case 8:{
                 cout << "The roman numeral for " << num << " is VIII";
                 break;
             }
             case 9:{
                 cout << "The roman numeral for " << num << " is IX";
                 break;
             }
             case 10:{
                 cout << "The roman numeral for " << num << " is X";
                 break;
             }
             default:{
                 cout << "Invalid input. Run the program again and enter a number from 1 to 10 next time.";
                 break;
             }
         }
     }
 }
 //Exit Stage right
    return 0;
}

