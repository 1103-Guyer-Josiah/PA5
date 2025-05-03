#include "player.h"

Player::Player(){
    int health =100;
    int numTrophy = 0 ;
    int xPosition = 0;
    int yPosition = 0;
    //name = {};
}
Player::Player(const Player &rh){
    health = rh.health;
    numTrophy = rh.numTrophy;
    xPosition = rh.xPosition;
    yPosition = rh.yPosition;
    //name = rh.name;
}
int Player::getHealth()const{
    return health;
}

int Player::getNumTrophy()const{
    return numTrophy;
}

int Player::getxPosition()const{
    return xPosition;
}

int Player::getyPosition()const{
    return yPosition;
}
/*
string Player::getName()const{
    return name;
}
*/
void Player::setyPosition(int i){
    yPosition += i;
}
void Player::setxPosition(int i){
    xPosition += i;
}
/*
void Player::setName(string s){
    name = s;
}
*/    
void Player::setHealth(int j){
    health=j;
}

char Player::playerDisplay() const{
    return 'P';
}

void Player::movePlayer(char n){
    switch(n){
        case 'a':
        case 'A':
            if(getxPosition()>0){
                setxPosition(-1);
            }
            else{
                cout << "Not a Valid Move."<<endl;
            }
            break;
        case 'd':
        case 'D':
            if(getxPosition()<4){
                setxPosition(1);
            }
            else{
                cout << "Not a Valid Move."<<endl;
            }
            break;
        case 'w':
        case 'W':
            if(getyPosition()>0){
                setyPosition(-1);
            }
            else{
                cout << "Not a Valid Move."<<endl;
            }
            break;
        case 's':
        case 'S':
            if(getyPosition()<4){
                setyPosition(1);
            }
            else{
                cout << "Not a Valid Move."<<endl;
            }
            break;
    }
}