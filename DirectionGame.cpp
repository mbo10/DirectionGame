// DirectionGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Game.h"

using namespace std;

void Initialisation() {
    cout << "Initialising game" << endl;
};

void Termination() {
    cout << "Terminating game" << endl;
};

int main() {
    Game game;
    GameComponent** comp(2);
        Initialisation();
        game.Add(comp);
        game.Run();

        Termination();
};