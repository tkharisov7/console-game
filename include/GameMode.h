//
// Created by artur on 21.03.2021.
//

#ifndef CONSOLE_GAME_GAMEMODE_H
#define CONSOLE_GAME_GAMEMODE_H

#include <vector>
#include <iostream>
#include <fstream>
#include "StatsFabric.h"
#include "QuestionFabric.h"

class GameMode {
public:
    int readDifficulty();
    std::vector<Stats*> setDifficulty(int);

};
#endif //CONSOLE_GAME_GAMEMODE_H
