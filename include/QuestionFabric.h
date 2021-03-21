//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_QUESTIONFABRIC_H
#define CONSOLE_GAME_QUESTIONFABRIC_H

#include "Question.h"

class QuestionFabric {
//Method
public:
    virtual Question* factoryMethod(const std::string&, const std::vector<Stats>&, const std::vector<Stats>&) const = 0;
};

class OrdinaryQuestionFabric : public QuestionFabric {
public:
    Question* factoryMethod(const std::string&, const std::vector<Stats>&, const std::vector<Stats>&) const override;
};

class CountryQuestionFabric : public QuestionFabric {
public:
    Question* factoryMethod(const std::string&, const std::vector<Stats>&, const std::vector<Stats>&) const override;
};

#endif //CONSOLE_GAME_QUESTIONFABRIC_H
