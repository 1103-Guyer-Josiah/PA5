/*
Edited by Guyer,Josiah
5/8/2025
*/
#include "opponent.h"

Opponent::Opponent(){
    int xPosition = 4;
    int yPosition = 4;
    int value = 30;
}

Opponent::Opponent(int x, int y){
    xPosition = x;
    yPosition = y;
    int value = 30;
}

Opponent::Opponent(const Opponent &rh){
    value = rh.value;
    xPosition = rh.xPosition;
    yPosition = rh.yPosition;
}
int Opponent::getValue()const{
    return value;
}
int Opponent::getxPosition()const{
    return xPosition;
}

int Opponent::getyPosition()const{
    return yPosition;
}
void Opponent::setyPosition(int i){
    yPosition += i;
}
void Opponent::setxPosition(int i){
    xPosition += i;
}