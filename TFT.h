#ifndef TIT_FOR_TAT_H
#define TIT_FOR_TAT_H

#include "Agent.h"

class TFT : public Agent {
    public:
        char makeMove(int round);
        TFT();
};

#endif