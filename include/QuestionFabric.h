//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_QUESTIONFABRIC_H
#define CONSOLE_GAME_QUESTIONFABRIC_H

#include "Question.h"

class QuestionCreator {
//Method
 public:
  virtual Question* createQuestion(const std::string&,
                                   const std::vector<Stats>&,
                                   const std::vector<Stats>&,
                                   const std::vector<Stats*>&) const = 0;
};

class OrdinaryQuestionCreator : public QuestionCreator {
 public:
  Question* createQuestion(const std::string&,
                           const std::vector<Stats>&,
                           const std::vector<Stats>&,
                           const std::vector<Stats*>&) const override;
};

class CountryQuestionCreator : public QuestionCreator {
 public:
  Question* createQuestion(const std::string&,
                           const std::vector<Stats>&,
                           const std::vector<Stats>&,
                           const std::vector<Stats*>&) const override;
};

#endif //CONSOLE_GAME_QUESTIONFABRIC_H
