#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player{
    int health =100;
    int numTrophy =0;
    int xPosition = 0;
    int yPosition =0;
    friend ostream & operator << (ostream&, const Player&);

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
        //void StartingPosition(int, int);
        void movPostion(char);
        char playerDisplay() const;
        void setName(string);
        void movePlayer(char);
        bool gameCheck(char);

};
#endif