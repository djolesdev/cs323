//
// Created by Djordje Stefanovic on 20.6.22..
//

#include "IntesaATM.h"

IntesaATM::IntesaATM() {}

IntesaATM::IntesaATM(double stanje) : ATM(stanje)  {
    this->fee = 5;
}

bool IntesaATM::isValidUser(int id) {
    return ATM::isValidUser(id);
}

IntesaATM::~IntesaATM() {

}
