#include "board.h"
#include "player.h"
   
Board::Board(){
for(int i =0; i<5; i++ ){
    for(int j = 0; j<5; j++){
         grid[i][j]='.';
        }
    }
}
/*
item[12]{0}
*/
void Board::setPosition(int i, int j, char p){
    grid[i][j]=p;
}

char Board::getPosition(int i, int j)const{
    return grid[i][j];
}
bool Board::collisionDetection(){
    
}

void Board::displayBoard(const Player player){
        for(int i =0; i<5; i++ ){
            for(int j = 0; j<5; j++){
                if(player.getyPosition()==i&& player.getxPosition()==j){
                    cout<< player.playerDisplay()<< ' ';
                }
                else{
                    cout << getPosition(i,j)<< ' ';
                }
            }
            cout<< endl;
        }
}