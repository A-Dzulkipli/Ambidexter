#include "SimpleCreator.h"
#include "Agent.h"
#include "Pushover.h"
#include "Traitor.h"
#include "TFT.h"

#include <vector>

using namespace std;

SimpleCreator::SimpleCreator(std::string f) : AgentCreator(f) {

}

vector<Agent*> SimpleCreator::generate() {
    Pushover* p = new Pushover();
    Traitor* t = new Traitor();
    TFT* tft = new TFT();
    return {p, t, tft};
}