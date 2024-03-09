#ifndef TOURNAMENT_MANAGER_H
#define TOURNAMENT_MANAGER_H

#include <vector>
#include <iostream>
#include <unordered_map>
#include "Agent.h"
#include "GameManager.h"
#include "AgentCreator.h"

class TournamentManager {
    private:
        std::vector<Agent*> players;
        //std::unordered_map<std::string, int> key;
        int games;
        int gameCount();
    public:
        TournamentManager(char tournamentType, std::string f);
        std::vector<int> runTournament();

};

#endif
