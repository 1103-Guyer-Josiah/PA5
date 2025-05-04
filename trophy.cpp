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

char Trophy::itemDisplay()const{
    return t_Status ? 'T' : '.';
}