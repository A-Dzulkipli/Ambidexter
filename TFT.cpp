#include "TFT.h"

#include <vector>

using namespace std;

TFT::TFT() {
    name = "Tit for Tat";
}

char TFT::makeMove(int round) {
    if (round == 0) {
        return 'C';
    }

    else return history[round-1];
}