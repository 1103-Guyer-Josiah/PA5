#ifndef OPPONENT_H
#define OPPONENT_H
#include <iostream>

class Opponent{
    int xPosition = 4;
    int yPosition = 4;
    int value = 30;

    public:
        Opponent();
        Opponent(int, int);
        Opponent(const Opponent&);

        int getxPosition() const;
        int getyPosition() const;
        int getValue() const;

        void setxPosition(int );
        void setyPosition(int );
};
#endif