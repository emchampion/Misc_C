//
//  ponyrace.cpp
//
//
//  Created by Eric Champion on 7/13/13.
//
//


#include <iostream>
#include <stdlib.h>
#include <time.h>

#define MAX_LANES 4

class Horse{
    // horse as an obj
    int move;
public:
    Horse();
    void flip();
    int getPosition();
};

class Track{
    // the track
    Horse horses[MAX_LANES];
public:
    void lane(int);
    void start();
};


int main(){
    srand(time(NULL));
    Track raceway;
    raceway.start();
    return 0;
}

void Horse::flip(){
    // random for horse coin flip
    if(rand()%2 == 1)
        //advance move by 1
        move++;
}

int Horse::getPosition(){
    return move;
}

Horse::Horse(){
    //to make move valid in class
    move = 0;
}

void Track::lane(int racer){
    // number of spots for the horse 0-9 or 10
    int local = horses[racer].getPosition();
    for (int x = 0; x < 10; x++){
        if (x != local)
            std::cout << "=";
        else
            std::cout << racer;
    }
    std::cout << "\n";
}

void Track::start(){
    // where the race happens
    bool bQuit = true;
    int winner;
    while (bQuit){
        for (int x = 0; x < MAX_LANES; x++){
            Track::lane(x);
            if (horses[x].getPosition() == 9)
            {
                winner = x;
                bQuit = false;
            }
        }
        
        if(bQuit)
        {
            //Prompt user for update on race.
            std::cout << "Press ENTER to continue...";
            std::cin.ignore(10000, '\n');
            for (int x = 0; x < MAX_LANES; x++){
                horses[x].flip();
            }
        }
        else
        {
            //Do winner stuff here
            std::cout << "HORSE " << winner << " IS THE WINNER";
        }
    }
}