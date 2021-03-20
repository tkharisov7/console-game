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
    std::string text_of_question;

    //Impact of the question on Stats if answer is positive
    std::vector<Stats> impact_on_stats_positive;
    //Impact of the question on Stats if answer is negative
    std::vector<Stats> impact_on_stats_negative;
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
    std::string name_of_country;
    CountryQuestion();

    CountryQuestion(std::string);
};

#endif //CONSOLE_GAME_QUESTION_H
