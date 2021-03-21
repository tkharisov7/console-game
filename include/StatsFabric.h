//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_STATSFABRIC_H
#define CONSOLE_GAME_STATSFABRIC_H

#include "Stats.h"

class StatsFabric {
    //Fields
public:
    virtual Stats* factoryMethod(int arg_points, const std::string& arg_name) const = 0;

};

class OrdinaryStatsFabric : public StatsFabric {
public:
    Stats* factoryMethod(int arg_points, const std::string& arg_name) const override;
};

class CountryStatsFabric : public StatsFabric {
public:
    Stats* factoryMethod(int arg_points, const std::string& arg_name) const override;
};


#endif //CONSOLE_GAME_STATSFABRIC_H
