#include "board.h"
#include "player.h"
#include "trophy.h" 
#include "opponent.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    Board grid;
    Player user;
    Opponent jimmy;
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
        grid.generateBoard(jimmy,user);
        cout << user << endl;
        cout << grid << endl;
        cin>> input;
        user.movePlayer(input);
        grid.OpponentMove(jimmy);
      //  grid.OpponentMove(jimmy);

        system("clear");
    }while(user.gameCheck(input));

    }
    return 0;
}