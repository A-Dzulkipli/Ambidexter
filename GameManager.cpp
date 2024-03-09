#include "GameManager.h"
#include "Agent.h"
#include <vector>
#include <utility>

using namespace std;

GameManager::GameManager(Agent* a, Agent* b, int n) {
    p1Score = 0;
    p2Score = 0;

    p1  = a;
    p2 = b;

    gameCount = n;

    history = vector<pair<char, char>>(n, {'.', '.'});

    p1->history = vector<char>(gameCount, '.');
    p2->history = vector<char>(gameCount, '.');
}

vector<pair<char, char>> GameManager::getHistory() {
    return history;
}

pair<int, int> GameManager::runGame() {
    for (int i = 0; i < gameCount; i++) {
        char move1 = p1->makeMove(i);
        char move2 = p2->makeMove(i);

        history[i].first = move1;
        history[i].second = move2;
        p1->history[i] = move2;
        p2->history[i] = move1;

        if (move1 == 'C' and move2 == 'C') {
            p1Score += 3;
            p2Score += 3;
        }

        else if (move1 == 'B' and move2 == 'C') {
            p1Score += 5;
        }

        else if (move1 == 'C' and move2 == 'B') {
            p2Score += 5;
        }

        else if (move1 == 'B' and move2 == 'B') {
            p1Score += 1;
            p2Score += 1;
        }
    }

    return {p1Score, p2Score};
}