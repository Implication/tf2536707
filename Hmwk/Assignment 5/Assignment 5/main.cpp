/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 21, 2014, 10:55 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes
float calcRet(float& price, float& perc); //Problem 1
void celsius(int F); // Problem 2
void faldis(unsigned short& t); //Problem 3
float ke(unsigned short m, float v); //Problem 4
double getSale(string name); //Problem 5
void findHig(float s1, float s2, float s3, float s4); //Problem 5
string upper(string s); //Problem 6
bool same(string s1, string s2);// Problem 6
void scores(short&, short&, short&, short&, short&); //Problem 7
void scores(float&, float&, float&, float&, float&); //Problem 8
float findLow(float& , float&,  float& , float& , float& ); //Problem 7 
float findHig(float&, float&, float&, float&, float&); //Problem 8
void calcAverage(short&, short&, short&, short&, short&); // Problem 7
void calcAverage(float&, float&, float&, float&, float&); // Problem 8
bool isPrime(int number); //Problem 9
float PV(float F, unsigned short years, float rate); //Problem 10


//Execution begins here
int main(int argc, char** argv) {
    //General Menu Format
    char cond;
    do{
        //Display the selection
        cout<<"Type 1-10 see a problem"<<endl;
   
        //Read the choice
        short choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                    //Gaddis 8th Edition Chapter 6 Problem 1
                    float price, perc; //Price and percentage of the item
                    //Prompt for user information
                    //Get user input
                    cout << "Enter the items retail price" << endl;
                    cin >> price;
                    cout << "Enter the markup percentage" << endl;
                    cin >> perc;
                    //Put values into the function calcRet
                    calcRet(price, perc);
                    //Display results
                    cout << "The retail price of this item is $" << setprecision(2) << fixed << showpoint << price << endl;
                    break;
                }
                case 2:{
                    //Gaddis 8th Edition Chapter 6 Problem 2
                    //Output table
                    cout << setw(3) <<  "Fahrenheit" << setw(12) <<  "Celsius" << endl;
                    cout << string(23, '-') << endl;
                    //Declare Fahrenheit at 0
                    unsigned short fahre = 0;
                    for(fahre; fahre <= 20; fahre++){ //Loop a table from 0 to 20, showing all the fahrenheits
                    cout << setw(6) << fahre << setw(16);
                    celsius(fahre);
                    }
                    break;
                }
                case 3:{
                    //Gaddis 8th Edition Chapter 6 Problem 3
                    //Output a table from 0 to 20 showing the falling distance
                    for(unsigned short t = 0; t <= 10; t++){
                        cout << "At " << t << " seconds the falling distance is ";
                        //Use the function faldis to get the falling distance from 0 to 20
                        faldis(t);
                    }
                    break;
                }
                case 4:{
                    //Gaddis 8th Edition Chapter 6 Problem 4
                    float v; //velocity of an object
                    unsigned short m; //mass on an object
                    float kinetic; //the kinetic energy of an object
                    //Prompt for mass and velocity
                    cout << "Enter the mass of the object: " << endl;
                    cin >> m;
                    cout << "Enter the velocity of the object: " << endl;
                    cin >> v;
                    //Calculate the kinetic energy
                    kinetic = ke(m,v);
                    //Display results
                    cout << "The kinetic energy of this object is " << setprecision(2) << fixed << showpoint << kinetic << " joules." << endl;
                    break;
                }
            case 5:{
                //Gaddis 8th Edition Chapter 6 Problem 5
                float s1, s2, s3, s4;
                
               s1 = getSale("Northeast");
               s2 = getSale("Southeast");
               s3 = getSale("Northwest");
               s4 = getSale("Southwest");
               findHig(s1, s2, s3, s4);
               break;
            }
            case 6:{
                //Gaddis 8th Edition Chapter 6 Problem 6
                string s1, s2;
                string uS1, uS2;
                cout << "Enter the first name" << endl;
                cin >> s1;
                cout << "Enter the second name" << endl;
                cin >> s2;
                
                uS1 = upper(s1);
                uS2 = upper(s2);
              
                if(same(uS1,uS2)){
                    cout << "These strings are the same" << endl;
                }
                else{
                    cout << "These strings are not the same" << endl;
                }
                break;
            }
            case 7:{
                //Gaddis 8th Edition Chapter 6 Problem 7
                //Declare the 4 variables
                short s1,s2,s3,s4,s5; //The five score totals
                //Call function scores
                scores(s1,s2,s3,s4,s5);
                //Call function Average
                calcAverage(s1,s2,s3,s4,s5);
                break;
            }
            case 8:{
                //Gaddis 8th Edition Chapter 6 Problem 8
                //Declare the scores
                float s1,s2,s3,s4,s5;
                //Pass into the void function scores
                scores(s1,s2,s3,s4,s5);
                //Calculate average in the void function calcAverage
                calcAverage(s1,s2,s3,s4,s5);
                break;
            }
            case 9:{
                //Gaddis 8th Edition Chapter 6 Problem 9
                //Declare varaibles
                int number;
                //Prompt for the number to test
                cout << "Enter the number:" << endl;
                cin >> number;
                //Validates whether the function is true or false
                if(isPrime(number)){
                    cout << "This number is prime" << endl;
                }
                else{
                    cout << "This number is not prime" << endl;
                }
                break;
            }
            case 10:{
                //Gaddis 8th Edition Chapter 6 Problem 10
                unsigned short n; //Number of years
                float F; //Future value the user wants
                float r; //Annual interest rate
                cout << "Enter the Future value you wish to get" << endl;
                cin >> F;
                cout << "Enter the number of years you plan to let the money sit in the account" << endl;
                cin >> n;
                cout << "Enter the annual interest rate of the bank you will place this money in" << endl;
                cin >> r;
              float P =  PV(F,n,r);
              cout << setprecision(2) << fixed << showpoint << "The amount you would need to deposit to get the future value today is $" << P << "." << endl;
              break;
            }
            default :{
                cout << "You choose a problem that dosent exist. Exiting Loop..." << endl;
            }
            cout << "Again? Enter y for yes" << endl;
            cin >> cond;
            
        }
    }while(cond == 'y' || cond == 'Y');//Upper do-while
    return 0;
}

/* This function takes in 2 parameters 
 that calculate the retail price of the
 item, by taking the percentage of the 
 markup and adding that price to the base
 value*/

float calcRet(float& price, float& perc){
    float ret = price * (perc / 100);
    price = price + ret;
    return price;
}

/* This function takes in a temperature 
 Fahrenheit and calculates the conversion
 of this temperature in Celsius*/

void celsius(int F){
    float temp = 9.0/5.0;
    float celsius = temp * (F - 32);
    cout << celsius << endl;
}

/* This Function takes in a time in seconds 
 and determines the falling distance rate based
 on the gravity, which is equal to g times the seconds squared
 all divided by 2. Then outputs that number */

void faldis(unsigned short& t){
    float g = 9.8;
    float d = ((t * t) * g) / 2;
    cout << d << " meters" << endl;
}

/*This function takes in the mass and velocity 
 * of an object and returns the kinetic energy 
 * of the object by using the parameters in a formula
 * to calculate kinetic energy
 */

float ke(unsigned short m, float v){
    float ke = ((v * v) * m) / 2;
    return ke;
}

/*Takes in the name of the division
 and uses that in order to take in
the sale count of that division*/

double getSale(string name){
    double sale;
    cout << "What is the division quarterly sales figure for " << name << "division?" << endl;
    cin >> sale;
    while(sale < 0){
        cout << "Please enter a proper sales figure" << endl;
        cin >> sale;
    }
    cout << endl;
    return sale;
}

/*This takes in the 4 sales from getSale
 and finds the highest sale total of
 the 4 divisions*/
void findHig(float s1, float s2, float s3, float s4){
    float high;
    string name;
    if(s1 > s2){
        high = s1; 
        name = "Northwest";
    } 
    else {high = s2; name = "Southeast";}
    
    if (high < s3){ high = s3; name = "Northwest";}
    if(high < s4) { high = s4; name = "Southwest";}
    
     cout << setprecision(2) << fixed << showpoint << "The highest division in terms of sales is the " << name << " division with a sale total of $" << high << "." << endl; 
}

/*This takes in a string, places it into a loop
 and uppercases the entire string into another string
 declared in the loop*/

string upper(string s){
    string upper;
    for(short i = 0; i < s.size(); i++){
     upper.resize(i+1,toupper(s[i]));
       }
    return upper;
}

/*This takes in 2 strings and then it comapares
 the two strings to see if they are equal*/
bool same(string s1, string s2){
    if(s1 == s2){
        return true;
    }
    else return false;
}
void scores(short& s1, short& s2, short& s3, short& s4, short& s5){
      cout << "Enter the first score " << endl;
    cin >> s1;
    cout << "Enter the second score " << endl;
    cin >> s2;
    cout << "Enter the third score " << endl;
    cin >> s3;
    cout << "Enter the fourth score " << endl;
    cin >> s4;
    cout << "Enter the fifth score " << endl;
    cin >> s5;
}

/*This takes in a total of 5 variables and places */
void scores(float& s1, float& s2, float& s3, float& s4, float& s5){
    cout << "Enter the first score " << endl;
    cin >> s1;
    cout << "Enter the second score " << endl;
    cin >> s2;
    cout << "Enter the third score " << endl;
    cin >> s3;
    cout << "Enter the fourth score " << endl;
    cin >> s4;
    cout << "Enter the fifth score " << endl;
    cin >> s5;
}

/* FOR PROBLEM 8 This takes the five scores and finds the lowest scores of the
 five scores and returns it. Overloaded to take in floats.*/
float findLow(float& s1, float& s2, float& s3, float& s4, float& s5){
    float low = s1;
    if(low > s2) low = s2;
    if(low > s3) low = s3;
    if(low > s4) low = s4;
    if(low > s5) low = s5;
    return low;
}

/*FOR PROBLEM 7 This takes the five scores and finds the lowest scores of the
 five scores and returns it Overloaded to take in shorts*/
int findLow(short& s1, short& s2, short& s3, short& s4,short& s5){
    int low = s1;
    if(low > s2) low = s2;
    if(low > s3) low = s3;
    if(low > s4) low = s4;
    if(low > s5) low = s5;
    return low;
}

/*This compares every value from s1 to s5 and returns the highest score
 for this case of the judge problem*/
float findHig(float& s1, float& s2, float& s3, float& s4, float& s5){
     int high = s1;
    if(high < s2) high = s2;
    if(high < s3) high = s3;
    if(high < s4) high = s4;
    if(high < s5) high = s5;
    return high;
}

/*This takes in the average of 4 subtracting off the lowest score
 and returns the average of all the scores For PROBLEM 7
 */
void calcAverage(short& s1, short& s2, short& s3, short& s4, short& s5){
    int low = findLow(s1,s2,s3,s4,s5);
    short ave;
         ave = (s1 + s2 + s3 + s4 + s5 - low) / 4;

    cout << "The average is " << ave << "%" << endl;
}

/*FOR PROBLEM 8 This takes in the average of 3 subtracting off the lowest score
 * and the highest score and returns the average of all the scores */
void calcAverage(float& s1, float& s2, float& s3, float& s4, float& s5){
   float low = findLow(s1,s2,s3,s4,s5);
   short high = findHig(s1,s2,s3,s4,s5);
   float ave;
   if(low == 0){
        ave = (s1 + s2 + s3 + s4 + s5 - low - high)  / 4;
   }
   else{
        ave = (s1 + s2 + s3 + s4 + s5 - low - high)  / 3;
   }
    cout << "The average is " << setprecision(1) << fixed << showpoint << ave << endl;
}

/*This funcion is used to find whether a number is Prime
 or not. It uses a for look from 2 to the number less than 1
 in order to test if that number % by the increment value is equal to zero
 if its true, then it is not a prime number, and returns to main, however if its true
 then isPrime is set to true*/
bool isPrime(int number){
    bool isPrime = true;
    if(number == 1 || number == 2){
        isPrime;
    }
    else{
        for(int n = 2; n < number - 1; n++){
            if(number % n == 0){
                isPrime = false;
                return isPrime;
            }
            }
        }
    return isPrime;
    }

float PV(float F, unsigned short years, float rate){
    float den = pow((1+rate),years);
    float P = F/den;
    return P;
}