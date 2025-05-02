#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "player.h"
using namespace std;

class Board{
        char grid[5][5];
    public:
        Board();
        char getPosition(int, int) const;
        void setPosition(int, int, char);
        void displayBoard(const Player);
};
#endif