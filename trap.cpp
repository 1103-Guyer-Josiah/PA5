/*
Edited by Guyer,Josiah
5/8/2025
*/
#include "trap.h"
#include "item.h"

Trap::Trap():Item(){
    value =20;
}
Trap::Trap(int x, int y):Item(x,y){
    value =20;
}
Trap::Trap(const Trap &rh){
    value = rh.value;
}
char Trap::itemDisplay()const{
    return t_Status ? 'X' : '.';
}