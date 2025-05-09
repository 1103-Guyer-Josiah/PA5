/*
Edited by Guyer,Josiah
5/8/2025
*/

#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "player.h"
#include "opponent.h"
#include "item.h"
using namespace std;

class Board{
        char grid[5][5];
        Item* items[12];
        int numTrophies = 5;
        int numTraps = 7;
        friend ostream & operator << (ostream&, const Board&);
    public:
        Board();
        void place(int, int, char);
        bool positionEmpty(int,int);
        void generateBoard(Opponent&,Player&);
        void RandArrayGen(const Player&);
        void collisionDetection(Opponent&, Player&);
        void OpponentMove(Opponent&);

};
#endif