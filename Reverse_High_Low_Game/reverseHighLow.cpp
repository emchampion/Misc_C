//
//  highlowguessrever.cpp
//
//
//  Created by Eric Champion on 7/3/13.
//
//

// Reverse High Low Game

#include <iostream>
using namespace std;

int magic(int min, int max);

int main(){

    int upper, lower, menuSelect, guess, guesses;
    char hint;
    bool finished;

    cout << " Would you like to play a game?" << endl;

    replay: // goto will jump here
        upper = 100; // resets the data after a replay or declares for first run
        lower = 1;
        guess = 50;  // who wouldnt start guessing at 50 if they had more then one try?
        guesses = 1; //guess counter

    cout << "\n Think of a number between 1 and 100!" << endl;
    cout << "\n Press 1 -- to play" << endl;
    cout << "\n Press 2 -- to quit" << endl;
    cin >> menuSelect;
    while (menuSelect != 2 && menuSelect != 1){ // menu loo[
        cout << "Try again?" << endl;  // for invalid input
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> menuSelect;
    }
    if (menuSelect == 1){  // pressing 1 starts triggers this IF
        while (lower <= upper && !finished){  // guess h l c loop
            cout << "The computer guesses: " << guess << endl;
            cout << "please press 'h' if high, 'l' if low and 'c' if correct: \n" << endl;
            cin >> hint;
            while (hint !='h' && hint != 'l' && hint != 'c'){
                cout << "Not valid" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                cin >> hint;
            }
            if(hint == 'h'){
                upper = guess -1;
                magic (lower, upper);
                guess = magic(lower, upper);
            }
            if(hint == 'l'){
                lower = guess +1;
                magic (lower, upper);
                guess = magic(lower, upper);
            }
            if (hint == 'c'){
                cout << "Game Over!" << endl;
                finished = true;
                cout << "I did this in: " << guesses << " guesses!"<< endl;
                goto replay;

            }
        ++guesses; // guess counter
        }
        if (menuSelect == 2){
            cout << "it would have been nice to play";
        }
    }
}

int magic(int min, int max){  // the math for the next guess
    return ((max - min) /2) + min;
}
