#ifndef CREATOR_CREATOR_H
#define CREATOR_CREATOR_H

#include "AgentCreator.h"
#include <string>

class CreatorCreator {
    private:
        std::string f;
    public:
        CreatorCreator(std::string f);
        AgentCreator* gameType(char t);
};

#endif