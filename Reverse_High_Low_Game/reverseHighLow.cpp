//
//  highlowguessrever.cpp
//
//
//  Created by Eric Champion on 7/3/13.
//
//

// Reverse High Low Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int upper = 100;    //global var note
int lower = 0;      //global var

//input a number
//run a random guess
//pass hess to see if it is high or low
//guess again /.618
//+/.618
//check again
//pass guess
//check again

int main() {
    srand(time(NULL));

    int guess;
    int count = 0;
    int result;
    bool winner = false;

    cout << "Enter a number between 1-100";
    cin >> userNumber;
    while (count != 0; num != guess;{

    }


int getNumber(int lastGuess){
	if (lastGuess > HIGH){
		upper = lastGuess;
		num = (random() % (upper-lower)) +lower
		return num
	}
	else if (lastGuess < LOW){
		lower = lastGuess
		num = (random() % (upper - lower)) + lower
		return num
	}
	else {you found the number return -1}
}

int menu{

}
