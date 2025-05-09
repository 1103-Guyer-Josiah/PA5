/*
Edited by Hallaran, Matt
5/8/2025
*/
#include "board.h"
#include "player.h"
#include "trophy.h" 
#include "opponent.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    Board grid;
    Opponent jimmy;
    char start;
    string name;
    cout<< "Would you like to play Adventure Treasure Hunt?(y/n)"<<endl;
    cin >> start;
    if(start=='n'||start=='n'){
        cout << "Fine! You smell, anyways!"<<endl;
        return 0;
    } else{
    cout << "Choose Your Name: ";
    cin >> name;
    Player user(name);
    grid.RandArrayGen(user);

    char input;
    system("clear");
    do{
        grid.generateBoard(jimmy,user);
        cout << user << endl;
        cout << grid << endl;
        cin>> input;
        user.movePlayer(input);
        grid.OpponentMove(jimmy);

        system("clear");
    }while(user.gameCheck(input));

    }
    return 0;
}