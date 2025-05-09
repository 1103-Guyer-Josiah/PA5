/*
Edited by Guyer,Josiah
5/8/2025
*/
#include "item.h"
Item::Item(){
    xPosition = 0;
    yPosition = 0;
    value = 0;
    t_Status = false;
}

Item::Item(int x, int y){
    xPosition = x;
    yPosition = y;
    value = 0;
    t_Status = false;
}
Item::Item(const Item& rh){
    xPosition = rh.xPosition;
    yPosition = rh.yPosition;
    value = rh.value;
    t_Status = rh.t_Status;
}
Item::~Item() = default;
int Item::getxPosition()const{
    return xPosition;
}
int Item::getyPosition()const{
    return yPosition;
}
int Item::getValue()const{
    return value;
}

void Item::setxPosition(int x){
    xPosition= x;
}
void Item::setyPosition(int y){
    yPosition=y;
}
void Item::setStatus(){
    t_Status = true;
}

void Item::resetValue(){
    value = 0;
}
Item& Item::operator = (const Item& rh){
    xPosition = rh.xPosition;
    yPosition = rh.yPosition;
    value = rh.value;
    t_Status = rh.t_Status;
    return *this;
}