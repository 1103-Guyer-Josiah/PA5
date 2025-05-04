#include "board.h"
#include "player.h"
#include "trophy.h" 
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    Board grid;
    Player user;
    char start;

    grid.RandArrayGen(user);
    cout<< "Would you like to play Adventure Treasure Hunt?(y/n)"<<endl;
    cin >> start;
    if(start=='n'&&start=='n'){
        "Fine! You smell, anyways!";
        return 0;
    } else{
    char input;
    Player user;
    system("clear");
    do{
        grid.generateBoard(user);

        cout << grid << endl;
        cout << user << endl;
        cin>> input;
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
    }while(user.gameCheck(input));

    }
    return 0;
}