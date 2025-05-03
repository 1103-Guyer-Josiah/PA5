#include "trophy.h"



Trophy::Trophy(){
    int count = 1, xPosition{0}, yPosition{0};
    bool triggeredStatus= false;
}
Trophy::Trophy(int x, int y){
    count = 1;
    xPosition = x;
    yPosition = y;
    triggeredStatus = false;
}
Trophy::Trophy(const Trophy &rh){
    xPosition = rh.xPosition;
    yPosition = rh.yPosition;
    triggeredStatus = rh.triggeredStatus;
    count = rh.count;
}

int Trophy::getxPosition()const{
    return xPosition;
}

int Trophy::getyPosition()const{
    return yPosition;
}

int Trophy::getCount()const{
    return count;
}

bool Trophy::getStatus()const{
    return triggeredStatus;
}

void Trophy::setxPosition(int i){
    xPosition= i;
}

void Trophy::setyPosition(int i){
    yPosition=i;
}

void Trophy::setStatus(bool i){
    triggeredStatus = i;
}

void Trophy::setCount(){
    count = 0;
}

char Trophy::trophyDisplay(){
    if(getStatus()==false){
        return '.';
    }
    else{
        setCount();
        return 'T';
    }
}