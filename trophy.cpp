#include "trophy.h"

Trophy::Trophy():Item(){
    value =1;
}
Trophy::Trophy(int x, int y):Item(x,y){
    value =1;
}
Trophy::Trophy(const Trophy &rh):Item(rh){
    value = rh.value;
}
/*
int Trophy::getxPosition()const{
    return xPosition;
}
int Trophy::getyPosition()const{
    return yPosition;
}
int Trophy::getValue()const{
    return value;
}

void Trophy::setxPosition(int x){
    xPosition= x;
}
void Trophy::setyPosition(int y){
    yPosition=y;
}
void Trophy::setStatus(){
    t_Status = true;
}

void Trophy::resetValue(){
    value = 0;
}
*/
char Trophy::itemDisplay()const{
    return t_Status ? 'T' : '.';
}