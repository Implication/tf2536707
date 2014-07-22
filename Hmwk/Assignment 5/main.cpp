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
float calcRet(float& price, float& perc);
void celsius(int F);
void faldis(unsigned short& t);
float ke(unsigned short m, float v);


//Execution begins here
int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 3 again"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '1':{
                    float price, perc; //Price and percentage of the item
                    //Prompt for user information
                    cout << "Enter the items retail price" << endl;
                    cin >> price;
                    cout << "Enter the markup percentage" << endl;
                    cin >> perc;
                    //Put values into the function calcRet
                    calcRet(price, perc);
                    cout << "The retail price of this item is $" << setprecision(2) << fixed << showpoint << price << endl;
                }
                case '2':{
                    cout << setw(3) <<  "Fahrenheit" << setw(12) <<  "Celsius" << endl;
                    cout << string(23, '-') << endl;
                    unsigned short fahre = 0;
                    for(fahre; fahre <= 20; fahre++){
                    cout << setw(6) << fahre << setw(16);
                    celsius(fahre);
                    }
                }
                case '3':{
                    for(unsigned short t = 0; t <= 10; t++){
                        cout << "At " << t << " seconds the falling distance is ";
                        faldis(t);
                    }
                }
                case '4':{
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
                    cout << "The kinetic energy of this object is " << setprecision(2) << fixed << showpoint << kinetic << " joules." endl;
                }
                default:{
                        cout<<"Exit?"<<endl;
                        loop=false;
                        break;
                }
        };
    }while(loop);//Upper do-while
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