#include "trap.h"
#include "item.h"

Trap::Trap(){
    xPosition = 0;
    yPosition = 0;
    value =20;
    t_Status= false; //trigger status
}
Trap::Trap(int x, int y){
    xPosition = x;
    yPosition = y;
    value =20;
    t_Status = false;
}
Trap::Trap(const Trap &rh){
    xPosition = rh.xPosition;
    yPosition = rh.yPosition;
    t_Status = rh.t_Status;
    value = rh.value;
}

char Trap::itemDisplay()const{
    return t_Status ? 'X' : '.';
}