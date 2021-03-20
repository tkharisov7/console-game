//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_QUESTIONFABRIC_H
#define CONSOLE_GAME_QUESTIONFABRIC_H

#include "Question.h"

class QuestionFabric {
  //Fields
 public:
  virtual Question* factoryMethod() const = 0;

 private:

  //Methods

};

class OrdinaryQuestionFabric {
 public:
  Question* factoryMethod() const override;
};

#endif //CONSOLE_GAME_QUESTIONFABRIC_H
