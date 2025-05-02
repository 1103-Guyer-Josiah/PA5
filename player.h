#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player{
    int health{100}, numTrophy{0}, xPosition{0}, yPosition{0};
    string name;

    public:
        Player();
        Player(const Player&);


        int getHealth() const;
        int getNumTrophy() const;
        int getxPosition() const;
        int getyPosition() const;
        string getName() const;

        void setHealth(int);
        void setNumTrophy(int);
        void setxPosition(int);
        void setyPosition(int);
        void StartingPosition(int, int);
        void movPostion(char);
        char playerDisplay() const;
        void setName(string);
        void movePlayer(char);

};
#endif