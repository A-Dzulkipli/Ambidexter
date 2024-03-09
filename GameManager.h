#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include <vector>
#include <iostream>
#include "Agent.h"
#include <utility>

class GameManager {
    private:
        int gameCount;

        Agent* p1;
        Agent* p2;

        int p1Score;
        int p2Score;

        std::vector<std::pair<char, char>> history;
    public:
        std::vector<std::pair<char, char>> getHistory();
        GameManager(Agent* a, Agent* b, int n);
        std::pair<int, int> runGame();


};

#endif