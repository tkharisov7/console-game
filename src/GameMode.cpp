//
// Created by artur on 21.03.2021.
//

#include "GameMode.h"
int GameMode::readDifficulty() {
    std::cout << "please, choose difficulty:\n1 - easy\n2 - hard\n";

    int difficulty;
    std::cin >> difficulty;
    return difficulty;
}

std::vector<Stats*> GameMode::setDifficulty(int x) {
    OrdinaryStatsFabric fabric_1;
    std::vector<Stats*> result;
    result.push_back(fabric_1.factoryMethod());
    result.push_back(fabric_1.factoryMethod());
    result.push_back(fabric_1.factoryMethod());
    result.push_back(fabric_1.factoryMethod());
    if (x != 1) {
        CountryStatsFabric fabric_2;
        result.push_back(fabric_2.factoryMethod());
    }
    return result;
}