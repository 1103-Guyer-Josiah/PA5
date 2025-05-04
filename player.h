#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player{
<<<<<<< HEAD
    int health =100;
    int numTrophy =0;
    int xPosition = 0;
    int yPosition =0;
    //string name;

=======
    int health{100}, numTrophy{0}, xPosition{0}, yPosition{0};
    string name;
    friend ostream & operator << (ostream&, const Player&);
>>>>>>> 40e2733 (Check out the executable on this version)
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