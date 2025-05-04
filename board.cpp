#include "board.h"
#include "player.h"
#include "item.h"
#include "trap.h"
#include "trophy.h"
#include <ctime>
#include <cstdlib>
   
Board::Board(){
for (int i = 0; i < 5; ++i){
    for (int j = 0; j < 5; ++j){
        grid[i][j] = '\0'; 
        }
    }
}

void Board::place(int x, int y, char p){
    grid[y][x]=p;
}

void Board::RandArrayGen(const Player& p){
    srand(time(0));
    int i=0;
    while(i < numTrophies){
        int x = rand()% 5;
        int y = rand()% 5;
        if(positionEmpty(x,y)&& 
                    !(x==p.getxPosition() && y == p.getyPosition())){
            items[i] = new Trophy(x,y);
            place(items[i]->getxPosition(),
                  items[i]->getyPosition(),
                  items[i]->itemDisplay());
            i++;
            //
        }
    }
    int j = i;
    while(j < numTraps+numTrophies){
        int x = rand()% 5;
        int y = rand()% 5;
        if(positionEmpty(x,y)==true&&
                    !(x==p.getxPosition() && y == p.getyPosition())){

            items[j] = new Trap(x,y);
            place(items[j]->getxPosition(),
                  items[j]->getyPosition(),
                  items[j]->itemDisplay());
            j++;
            //cout << '('<< x << ','<< y << ')';
        }
    }
    cout <<endl;
}

bool Board::positionEmpty(int x,int y){
        return grid[y][x]=='\0';
}

void Board::collisionDetection(Player& p){
    
    
    for(int i = 0; i < numTraps + numTrophies; i++){
        if(items[i]->getxPosition() == p.getxPosition()&&
                items[i]->getyPosition() == p.getyPosition()){
                    items[i]->setStatus();
                    if(items[i]->itemDisplay()=='T'){
                        p.setNumTrophy(items[i]->getValue());
                        items[i]->resetValue();
                    }
                    if(items[i]->itemDisplay()=='X'){
                        p.setHealth(items[i]->getValue());
                        items[i]->resetValue();
                    }
                }
            }
        }

void Board::generateBoard(Player& p){
    //refreshes board
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            grid[i][j] = '\0'; 
            }
        }
 
    //Places items on board
    for(int i = 0; i < (numTraps+numTrophies); i++){
        place(items[i]->getxPosition(),
              items[i]->getyPosition(), 
              items[i]->itemDisplay());
    }
    //fill in emptry spaces
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(positionEmpty(j,i)==true){
                grid[i][j]='.';
            }
        }
    }

       //places player
       place(p.getxPosition(), 
       p.getyPosition(),
       p.playerDisplay());
       collisionDetection(p);

}

ostream & operator << (ostream& out, const Board& d){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            out << d.grid[i][j] << ' ';
        }
        out << endl;
    }
    return out;
}