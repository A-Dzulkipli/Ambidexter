#ifndef AGENT_CREATOR_H
#define AGENT_CREATOR_H

#include "Agent.h"
#include <vector>
#include <string>

class AgentCreator {
    protected:
        std::string f;
    public:
        AgentCreator(std::string file);
        std::vector<Agent*> virtual generate() = 0;
};

#endif