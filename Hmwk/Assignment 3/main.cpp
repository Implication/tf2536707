/* 
 * File:   main.cpp
 * Author: Trajon Felton
 * Created on July 3, 2014, 12:13 PM
 */


//System Defined Libraries
#include <iostream>
#include <cstdlib> //Problem 8
#include <ctime> //Problem 8
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
    cout << "Enter the first number: " << endl;
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
               cout << "The roman numeral for " << num << "  is II";
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
     case 3:{
         //Gaddis 8th edition Chapter 4 Problem 3
//Inputs
         unsigned short month, day, year; //Variables of the month, date and year entered by the user
//Get input of month, date, and year
         cout << "Enter the month in numerical format. Ex: 06, 04," << endl;
         cin >> month;
         while(month < 00 || month > 12){ //Checks to see if the month if accurate
             cout << "Invalid input. Please enter the month again" << endl;
             cin >> month;
         }
         cout << "Enter the day of the month:" << endl;
         cin >> day;
         while(day < 00 || day > 31){ //Checks to see if the day is accurate
             cout << "Invalid input, please enter the day again" << endl;
             cin >> day;
         }
         cout << "Enter the year in two digit format" << endl;
         cin >> year;
         while(year < 0 || year > 99){ //Checks to see if the year is in two digit format
             cout << "Invalid input. Please enter the year in two digit format" << endl;
             cin >> year;
         }
         if((day * month) == year){ // If the day and the month multiply equal the year its magical
             cout << "This is a magical date";
         }
         else //Otherwise the date sucks
             cout << "This date is not magic";
     }
     case 4:{
         //Gaddis 8th edition Chapter 4 Problem 4
//Inputs
         float len1, len2; //Lengths of two rectangles gather by user input
         float wid1, wid2; //Width of two rectangles gathered by user input
//Output
         float area1, area2; //The area of the two rectangles
//Get the length and width's of the two rectangles
         cout << "Enter the length of the first rectangle" << endl;
         cin >> len1;
         cout << "Enter the length of the second rectangle" << endl;
         cin >> len2;
         cout << "Enter the width of the first rectangle" << endl;
         cin >> wid1;
         cout << "Enter the with of the second rectangle" << endl;
         cin >> wid2;
//Calculate the area's of the two rectangles
         area1 = len1 * wid1; //Area of the first rectangle
         area2 = len2 * wid2; //Area of the second rectangle
//Output based on the results
         if(area1 > area2){
             cout << "The area of the first rectangle is greater than the second." << endl;
         }
         else if(area2 > area1){
             cout << "The area of the second rectangle is greater than the first" << endl;
         }
         else
             cout << "The areas of both rectangles are equal" << endl;
         
     }
     case 5:{
         //Gaddis 8th Edition Chapter 4 Problem 5
//Inputs
         unsigned short books;
//Get number of books 
         cout << "Enter the number of books purchased this month" << endl;
         cin >> books;
//Output results based on the number of books bought
         if(books <= 0){
             cout << "You have earned 0 points" << endl;
         }
         else if(books == 1){
             cout << "You have earned 5 points" << endl;
         }
         else if(books == 2){
             cout << "You hae earned 15 points" << endl;
         }
         else if(books == 3){
             cout << "You have earned 30 points" << endl;
         }
         else{
             cout << "You have earned 60 points" << endl;
         }
     }
     case 6:{
         //Gaddis 8th Edition Chapter 4 Problem 6
//Input
        // number of coins the user will guess to make exactly 1 dollar.
         unsigned short dimes, nickles, pennies, quarters;
//Get number of dimes, pennies, nickles, and quarters    
         cout << "Enter the number of pennies" << endl;
         cin >> pennies;
         cout << "Enter the number of nickles" << endl;
         cin >> nickles;
         cout << "Enter the number of dimes" << endl;
         cin >> dimes;
         cout << "enter the number of quarters" << endl;
         cin >> quarters;  

         const unsigned short d = dimes , p = pennies , n = nickles , q = quarters;
//Display result
         if((p * 1) + (n * 5) + (d * 10) + (q * 25) < 100){
             cout << "The amount you enter will be less than 1 dollar";
         }
         else if((p * 1) + (n * 5) + (d * 10) + (q * 25) > 100){
             cout << "The amount you entered will be more than 1 dollar";
         }
         else
             cout << "Congratulations, you have entered exactly the amount of 1 dollar!";

         
     }
     case 7:{
         //Gaddis 8th Edition Chapter 4 Problem 7
 //Input
         unsigned int sec; //total number of seconds entered by the user
//Output variables

//Get number of seconds
       cout << "Enter the number of seconds:" << endl;
       cin >> sec;
     
       if(sec >=86400){
           cout << "The number of days in these number of seconds is " << sec/86400;
       }
       if(sec >= 3600 && sec <=86400){
           cout << "The number of hours in these number of seconds is " << sec/3600;
       }
       if(sec >= 60 && sec <= 3600){
           cout << "The number of minutes in these number of seconds is " << sec/60;
       }
    }
     case 8:{
         //Gaddis 8th Edition Chapter 4 Problem 8
//Generate a seed
         unsigned seed;
         seed = time(0);
         srand(seed);
//Input
         unsigned short answer;
//Get random numbers into variables
        unsigned short num1 = rand() % 40 + 10; //Random number generated by the seed
        unsigned short num2 = rand() % 40 + 10; //Random number generated by the seed
//Display random numbers
        cout << endl << " " << num1 << endl;
        cout << "+"  << num2 << endl;
        cout << "-----" << endl;   
        cin >> answer;
//Display output based on user input
        if(answer == num1 + num2){
            cout << "Congratulations, you got the right answer!" << endl;
        }
        else
            cout << "Incorrect, the answer is " << num1 + num2;
     }
 }
 //Exit Stage right
    return 0;
}

