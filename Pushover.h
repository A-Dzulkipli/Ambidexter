#ifndef PUSHOVER_H
#define PUSHOVER_H

#include "Agent.h"

class Pushover : public Agent {
    public:
        char makeMove(int round);
        Pushover();
};

#endif