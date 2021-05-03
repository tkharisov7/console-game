//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_TURN_H
#define CONSOLE_GAME_TURN_H

#include "QuestionFabric.h"
#include "Question.h"
#include "StatsFabric.h"
#include <vector>

class Turn {

  friend class StatsPrintCommand;
// Fields:
 public:

 private:
// Classes:
  //we need this class to finish the game correctly if we lose
  std::vector<Stats*> current_stats_;
  QuestionPool* question_pool_;
  int highest_point{15};
// Methods:
 public:
  //Constructor
  Turn(const std::vector<Stats*>&, QuestionPool*);

  Turn() = default;
  //starts the process of asking a question
  void run();

 private:
  //gets question from the pull of questions
  Question getQuestion();

  // checks the question for correctness
  bool checker(const Question&);

  // takes user's answer
  char input();

  void render();
  //asks the question and gets an answer
  char processQuestion(const Question&);
};
#endif //CONSOLE_GAME_TURN_H