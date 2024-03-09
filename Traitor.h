#ifndef TRAITOR_H
#define TRAITOR_H

#include "Agent.h"

class Traitor : public Agent {
    public:
        Traitor();
        char makeMove(int round);
};

#endif