#ifndef REFEREE_H
#define REFEREE_H
#include "Computer.h"
#include "Human.h"

class Referee{

public:

    Referee();
    char refGame(Human player1, Computer player2);

};

#endif //REFEREE_H