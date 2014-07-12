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
    unsigned short seed; //Needed to generate random results
    seed = time(0); //Set seed equal to time based on seconds from 1970
    srand(seed); //places the number in the random generator
    unsigned short ai; //Computer comands for the game
    ai = rand() % 3 + 1; //Needed for the computer to select 3 random commands
    char input; //User input based on the first letter of the animal
    //Output directions for the game
    cout << "Welcome to the game Animal Kingdom. This ever changing game" << endl;
    cout << "was made with the thought of rock paper scissors in mind. For the purpose" << endl;
    cout << "of this game, we will use the tiger a bear, and a wolf. Wolves dominates bears, Bears" << endl;
    cout << "dominate Tigers and Tigers dominate Wolves. You need to compete with the AI 5 times in order" << endl;
    //Get user input for the animal they wish to select
    cout << "to win. If the AI however manages to defeat you 5 times then you lose. Now lets begin the game!" << endl << endl;
    cout << "Enter the command for the animal you wish to select.  T for Tiger, B for Bear, and W for wolves." << endl;
    cin >> input;
    //Generate Statements based on user input
    //For this case, 1 = wolf, 2 =tiger, 3 =bear
    switch(ai){
        case 1:{ 
    
    if(input == 't'){ //If the user selects a tiger verses a wolf he wins
        cout << "The tiger swallows the wolf in its last effort to survive. You have won this round." << endl;
    }
    else if(input == 'w'){ //If the user selects a wolf agaisnt a wolf, it ends in a tie
        cout << "The wolves stare at each other g"
                "in agony as they find respect for the other. This round is a tie." << endl;
    }
    else{ //If the user selects a bear vs a wolf, he gets hunted by a pack and loses.
        cout << "As the Bear goes down the forest, the wolf attacks in an onslaught pack. You have lost this round" << endl;
    }
    break;
    }
        case 2:{ //If the number is 2, it is a tiger
            if(input == 't'){
                cout << "The tiger comes back to his home, to find another tiger staring at him in confusion. This round is a tie." << endl;
            }
            else if(input == 'w'){
                cout << "As the wolf runs away from the tiger, it remembers it's lost son. Losing all fear it turns back to get slaughtered. You have lost this round" << endl;
                
            }
            else{
                cout << "The bear sees the tiger pridefully on the montaintop. The lung toward the bear allows the bear to swiftly end the tiger. You have won this round." << endl;
            }
           
        
        break;
    } 
        case 3:{ //If the number is 3, it is a bear
            if(input == 't'){
            cout << "The tiger oversteps his bounds on bear territory, and learns who is king of the tree. You have lost this round." << endl;
            }
            else if(input == 'w'){
                cout << "The wolf descends upon the helpless bear as it sips on the honey tree. You have won this round." << endl;
                
            }
            else{
                cout << "The bears walk around the tree waiting for a chance to lick the tree. This round is a tie"  << endl;
            }
           break;         
        }
    }
 
    return 0;
}

