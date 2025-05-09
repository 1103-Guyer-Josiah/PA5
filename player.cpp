/*
Edited by Matt
5/8/2025
*/
#include "player.h"

Player::Player(){
    health =100;
    numTrophy = 0;
    xPosition = 0;
    yPosition = 0;
    name = "Player";
}
Player::Player(string p){
    health =100;
    numTrophy = 0;
    xPosition = 0;
    yPosition = 0;
    name = p;
}
Player::Player(const Player &rh){
    health = rh.health;
    numTrophy = rh.numTrophy;
    xPosition = rh.xPosition;
    yPosition = rh.yPosition;
    name = rh.name;
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
string Player::getName()const{
    return name;
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
void Player::setName(string i){
    name = i;
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
    health = health - j;
}
void Player::setNumTrophy(int i){
    numTrophy +=i;
}

char Player::playerDisplay() const{
    return 'P';
}

bool Player::gameCheck(char input){
    if (input=='q'){
        return false;
    }
    if(getNumTrophy()== 3){
        cout << "You have collected all the trophies!"<< endl;
        return false;
    }
    if (getHealth()<= 0){
        cout << "You have lost all your health!" << endl;
        return false;
    }
    return true;
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


ostream & operator << (ostream& out, const Player& p){
    out << "Player: " << p.name << endl;
    out << "Health: " << p.health <<  " | Treasures: " << p.numTrophy << "/3"<< endl;
    return out;
}