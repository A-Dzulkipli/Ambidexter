#include "CreatorCreator.h"
#include "AgentCreator.h"
#include "SimpleCreator.h"

#include <string>

using namespace std;

CreatorCreator::CreatorCreator(string f) {
    this->f = f;
}

AgentCreator* CreatorCreator::gameType(char t) {
    AgentCreator* res;
    if (t == 's') {
        res = new SimpleCreator(f);
    }

    else res = nullptr;

    return res;
}