#include "TournamentManager.h"
#include "AgentCreator.h"
#include "Agent.h"
#include "GameManager.h"
#include "CreatorCreator.h"

#include <utility>
#include <vector>
#include <string>

using namespace std;

TournamentManager::TournamentManager(char tournamentType, string f) {
    games = gameCount();
    CreatorCreator* tempCreator = new CreatorCreator(f);
    AgentCreator* myCreator = tempCreator->gameType(tournamentType);
    players = myCreator->generate();

}

int TournamentManager::gameCount() {
    return 200;
}

vector<int> TournamentManager::runTournament() {
    vector<int> res(players.size(), 0);
    for (int i = 0; i < players.size(); i++) {
        for (int j = i+1; j < players.size(); j++) {
            GameManager* myManager = new GameManager(players[i], players[j], games);
            pair<int, int> vals = myManager->runGame();
            res[i] += vals.first;
            res[j] += vals.second;
            delete myManager;
        }
    }
    return res;
}
