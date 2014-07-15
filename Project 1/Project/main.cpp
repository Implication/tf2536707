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
    unsigned short ai; //Computer commands for the game
    ai = rand() % 3 + 1; //Needed for the computer to select 3 random commands
    char input; //User input based on the first letter of the animal
    unsigned int games; //Number of games a player may wish to embark upon 
    //Output directions for the game
    unsigned int wins = 0; //Shows the number of wins 
    unsigned int losses = 0; //Shows the number of losses
    unsigned int ties = 0; //Shows the number of ties
    cout << "Welcome to the game Animal Kingdom. This ever changing game" << endl;
    cout << "was made with the thought of rock paper scissors in mind. For the purpose" << endl;
    cout << "of this game, we will use the tiger a bear, and a wolf. Wolves dominates bears, Bears" << endl;
    cout << "dominate Tigers and Tigers dominate Wolves. You need to compete with the AI 5 times in order" << endl;
    //Get user input for the animal they wish to select
    cout << "to win. If the AI however manages to defeat you 5 times then you lose. Now lets begin the game!" << endl << endl;
    cout << "Enter the number of games you wish to embark upon" << endl;
    cin >> games;
    for(unsigned int i = 0; i < games; i++){
    cout << "Enter the command for the animal you wish to select.  t for Tiger, b for Bear, and w for wolves." << endl;
    cin >> input;
    while(input != 't' && input != 'b' && input != 'w'){
        cout << "Please enter t for tiger, w for wolf, or b for bear." << endl;
        cin >> input;
    }
    //Generate Statements based on user input
    //For this case, 1 = wolf, 2 =tiger, 3 =bear
    switch(ai){
        case 1:{ 
    
    if(input == 't'){ //If the user selects a tiger verses a wolf he wins
        cout << "The tiger swallows the wolf in its last effort to survive. You have won this round." << endl;
        wins++;
    }
    else if(input == 'w'){ //If the user selects a wolf agaisnt a wolf, it ends in a tie
        cout << "The wolves stare at each other g"
                "in agony as they find respect for the other. This round is a tie." << endl;
        ties++;
    }
    else{ //If the user selects a bear vs a wolf, he gets hunted by a pack and loses.
        cout << "As the Bear goes down the forest, the wolf attacks in an onslaught pack. You have lost this round" << endl;
        losses++;
    }
    break;
    }
        case 2:{ //If the number is 2, it is a tiger
            if(input == 't'){
                cout << "The tiger comes back to his home, to find another tiger staring at him in confusion. This round is a tie." << endl;
                ties++;
            }
            else if(input == 'w'){
                cout << "As the wolf runs away from the tiger, it remembers it's lost son. Losing all fear it turns back to get slaughtered. You have lost this round" << endl;
                losses++;
                
            }
            else{
                cout << "The bear sees the tiger pridefully on the mountaintop. The lung toward the bear allows the bear to swiftly end the tiger. You have won this round." << endl;
                wins++;
            }
           
        
        break;
    } 
        case 3:{ //If the number is 3, it is a bear
            if(input == 't'){
            cout << "The tiger oversteps his bounds on bear territory, and learns who is king of the tree. You have lost this round." << endl;
            losses++;
            }
            else if(input == 'w'){
                cout << "The wolf descends upon the helpless bear as it sips on the honey tree. You have won this round." << endl;
                wins++;
                
            }
            else{
                cout << "The bears walk around the tree waiting for a chance to lick the tree. This round is a tie"  << endl;
                ties++;
            }
           break;         
        }
    }
    }
    return 0;
}

