#include <iostream>
#include "Human.h"

Human::Human(){

};

char Human::makeMove(){
    char move = ' ';

    do
    {
        std::cout<<"Enter move: ";
        move = getchar();
    } while (!(move=='R'||move=='P'||move=='S'));
    
    return move;
};

