//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_STATSFABRIC_H
#define CONSOLE_GAME_STATSFABRIC_H

#include "Stats.h"

class StatsCreator {
    //Fields
public:
    virtual Stats* createStats(int arg_points, const std::string& arg_name) const = 0;

};

class OrdinaryStatsCreator: public StatsCreator {
public:
    Stats* createStats(int arg_points, const std::string& arg_name) const override;
};

class CountryStatsCreator : public StatsCreator {
public:
    Stats* createStats(int arg_points, const std::string& arg_name) const override;
};


#endif //CONSOLE_GAME_STATSFABRIC_H
