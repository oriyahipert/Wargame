#include "Board.hpp"
using namespace WarGame;

     Soldier*&  Board ::operator[](std::pair<int,int> location){
         return board[0][0];
    }
    Soldier* Board ::operator[](std::pair<int,int> location) const{
        Soldier* s;
         return s;
    }
    void Board ::move(uint player_number, std::pair<int,int> source, MoveDIR direction){
        
    }
    bool Board :: has_soldiers(uint player_number) const{
        return false;
    }
