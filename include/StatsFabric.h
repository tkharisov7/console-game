//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_STATSFABRIC_H
#define CONSOLE_GAME_STATSFABRIC_H

#include "Stats.h"

class StatsFabric {
    //Fields
public:
    virtual Stats* factoryMethod() const = 0;

};

class OrdinaryStatsFabric : public StatsFabric {
public:
    Stats* factoryMethod() const override;
};

class CountryQuestionFabric : public StatsFabric {
public:
    Stats* factoryMethod() const override;
};


#endif //CONSOLE_GAME_STATSFABRIC_H
