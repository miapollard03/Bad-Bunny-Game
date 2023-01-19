#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <random>
#include <utility>
#include <cstdlib>

using namespace std;

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

    // Mutators
    void play();
    bool recommendMove(const Arena& a, int r, int c, int& bestDir);

private:
    Arena* m_arena;

    // Helper functions
    string takePlayerTurn();
};

#endif