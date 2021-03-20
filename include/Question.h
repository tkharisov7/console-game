//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_QUESTION_H
#define CONSOLE_GAME_QUESTION_H

#include <string>
#include <vector>
#include "Stats.h"

class Question {
//Fields:
public:
    std::string textOfQuestion;

    //Impact of the question on Stats if answer is positive
    std::vector<Stats> impactOnStatsPositive;
    //Impact of the question on Stats if answer is negative
    std::vector<Stats> impactOnStatsNegative;
// Methods:
public:
    // Constructor
    Question();
    // Destructor
    ~Question() = default;
};

class OrdinaryQuestion : public Question {
public:
    OrdinaryQuestion();
};

class CountryQuestion : public Question {
public:
    std::string nameOfCountry;
    CountryQuestion();

    CountryQuestion(std::string);
};

#endif //CONSOLE_GAME_QUESTION_H
