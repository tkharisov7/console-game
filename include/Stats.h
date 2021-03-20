//
// Created by Timur Kharisov on 20.03.2021.
//

#ifndef CONSOLE_GAME_STATS_H
#define CONSOLE_GAME_STATS_H

#endif //CONSOLE_GAME_STATS_H

#include <string>

class Stats {
//Fields:
public:
    int points;
    std::string nameOfStats;
//Methods:
public:
    //Constructor
    Stats(int, std::string);
    //Destructor
    ~Stats();
};