#ifndef SIMPLE_CREATOR_H
#define SIMPLE_CREATOR_H

#include "AgentCreator.h"
#include "Agent.h"

#include <vector>
#include <string>

class SimpleCreator : public AgentCreator {
    public:
        SimpleCreator(std::string f);
        std::vector<Agent*> generate();
};

#endif