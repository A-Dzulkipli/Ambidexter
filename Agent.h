#ifndef AGENT_H
#define AGENT_H

#include <string>
#include <vector>

class Agent {
    public:
        std::vector<char> history;
        std:: string name;
        virtual char makeMove(int round) = 0;
};

#endif