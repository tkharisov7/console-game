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
    Stats() = default;
    //Constructor
    Stats(int, std::string);

    //Destructor
    ~Stats() = default;
};

class OrdinaryStats : public Stats {
public:
    OrdinaryStats();
};

class CountryStats : public Stats {
public:
    std::string nameOfCountry;
    CountryStats();
    CountryStats(int, std::string);
};
