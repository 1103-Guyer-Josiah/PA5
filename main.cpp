#include "board.h"
#include "player.h"
#include <iostream>
#include <stdlib.h> 
using namespace std;

int main(){
    Board grid;
    char input;
    string name;
    Player user;
    system("clear");
    do{
        grid.displayBoard(user);
        cout<< "User Health: "<< user.getHealth()<<endl;
        cout<<"User Trophies: "<< user.getNumTrophy()<<"/3"<<endl;
        cin>>input;
        user.movePlayer(input);
        system("clear");
    }while(input!='q');
    return 0;

}