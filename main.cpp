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
        /*
        we need to create a gamestatus check
        this will check if input is 'q'
        this will check trophies 
        this will check health
        this will return true when these are 
        tripped and be the
        parameter of the do while loop
        */
    }while(input!='q');
    return 0;

}