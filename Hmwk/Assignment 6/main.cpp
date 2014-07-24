/* 
 * File:   main.cpp
 * Author: Trajon Fetlon
 * Created on July 24, 2014, 9:38 AM
 */

//System Defined Libraries
#include <iostream>
using namespace std;

//User Defined Libraries


//Global Constants


//Function Prototypes
short cntPerf(short x[]);

//Execution Begins Here
int main(int argc, char** argv) {
    char x; //Condition to do the problem again
    unsigned short prob; //Problem to do in the book
    do{
        cout << "Enter the problem you wish to see: " << endl;
        cin >> prob;
        switch(prob){
            case 1:{
                
                short scores[20]; //Array of scores
                short perf; //Takes in the number of perfect scores
                //Get the scores into the array.
                cout << "Enter twenty scores, and I will tell you how many are perfect scores: " << endl;
                for(short i = 0; i <= 19; i++){
                    cin >> scores[i];
                }
                //Get the number of perfect scores through function cntPerf
                perf = cntPerf(scores);
                //Enter the results
                cout << "The number of perfect scores enter is " << perf << "." << endl;
                //Exit case 1
                break;
            }
            case 2:{
                string roman[20] = { "I", "II", "III", "IV", "V",
                                     "VI", "VII", "VIII", "IX", "X",
                                     "XI", "XII", "XIII", "XIV", "XV",
                                     "XVI", "XVII", "XVIII", "XIX", "XX" };
                float num;
                cout << "Enter the number you wish to convert. **Note all number will be rounded down**" << endl;
                cin >> num;
                for(short b = 0; b <= 19; b++){
                    if(b + 1 <= num && num < b + 2){
                        cout << roman[b] << endl;
                    } 
                }
            }
            case 3:{
                string salsa[5] = {"mild", "medium", "sweet", "hot", "zesty" };
                short jars[5];
                short total;
                short high = 0;
                string name1, name2;
               
                for(short x = 0; x <= 4; x++){
                    cout << "Enter the number of jars sold that were " << salsa[x] << endl;
                    cin >> jars[x];
                } 
                short low = jars[0];
                for(short x = 0; x <= 4; x++){
                    cout << "Number of jars sold that were " << salsa[x] << ": "  << jars[x] << endl;
                    total += jars[x];
                    if (high < jars[x]){
                        high = jars[x];
                        name1 = salsa[x];
                    }
                    if (low > jars[x]){
                        low = jars[x];
                        name2 = salsa[x];
                    }
                }
                cout << endl;
                cout << "The total number of sales made in terms of jars is " << total << endl;
                cout << "The highest number  of sales was made by " << name1 << " salsa which sold " << high << " jars." << endl;
                cout << "The lowest number of sales was made by " << name2 << " salsa  which sold " << low << " jars." << endl;
            }
            case 4:{
                string monkey[3] = { "Sal", "Eric", "June"};
                string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
                short pound[3][7];
                short high = 0;
                short total = 0;
                string m1, d1, m2, d2;
                for(short x = 0; x <= 2; x++){
                    for(short y = 0; y <= 6; y++){
                        cout << "How many pounds did " << monkey[x] << " eat on " << day[y] << "? ";
                        cin >> pound[x][y];
                    }
                }
                short low = pound[0][0];
                for(short x = 0; x <= 2; x++){
                    for(short y = 0; y <= 6; y++){
                      total +=  pound[x][y];
                      if(high < pound[x][y]){
                          high = pound[x][y];
                          m1 = monkey[x];
                          d1 = day[y];
                      }
                      if(low > pound[x][y]){
                          low = pound[x][y];
                          m2 = monkey[x];
                          d2 = day[y];
                      }
                    }
                }
                    total /= 21;
                    cout << "Average amount of food eaten by every monkey was " << total << " pounds." endl;
                    cout << "Highest amount of food eaten by " << m1 << " on a " << d1 << " with a total of " << high << " pounds." << endl;
                    cout << "Lowest amount of food eaten by " << m2 << " on a " << d2 << " with a total of " << low << " pounds." << endl;
            }
            default:{
                cout << "There are only 10 problems! Please restart the loop" << endl;
            }
        }
        cout << "Do another problem? Y/N" << endl;
        cin >> x;
    }while(x == 'Y' || x == 'y');
    
    
    
    return 0;
}

short cntPerf(short x[]){
    short count = 0;
    for(short i = 0; i <= 19; i++){
        if(x[i] == 100){
            count++;
        }
    }
    return count;
}