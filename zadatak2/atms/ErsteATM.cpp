//
// Created by Djordje Stefanovic on 20.6.22..
//

#include "ErsteATM.h"

ErsteATM::ErsteATM() {}

ErsteATM::ErsteATM(double stanje) : ATM(stanje) {
    this->fee = 2;
}

ErsteATM::~ErsteATM() {}

bool ErsteATM::isValidUser(int id) {
    return ATM::isValidUser(id);
}

