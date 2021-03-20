//
// Created by Timur Kharisov on 20.03.2021.
//

#ifndef CONSOLE_GAME_STATS_H
#define CONSOLE_GAME_STATS_H


#include <string>

class Stats {
//Fields:
public:
    int points;
    std::string name_of_stats;
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
    std::string name_of_country;
    CountryStats();
    CountryStats(int, std::string);
};


#endif //CONSOLE_GAME_STATS_H