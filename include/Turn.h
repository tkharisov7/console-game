//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_TURN_H
#define CONSOLE_GAME_TURN_H

#include "QuestionFabric.h"
#include "StatsFabric.h"
#include <vector>

class Turn {
// Fields:
 public:

 private:
// Classes:
  //we need this class to finish the game correctly if we lose
  std::vector<Stats> current_stats_;
  std::vector<Question> question_pool_;
// Methods:
 public:
  //Constructor
  Turn(std::vector<Stats>, std::vector<Question>);

  //starts the process of asking a question
  std::vector<Stats> run();

 private:
  //gets question from the pull of questions
  Question getQuestion();

  // checks the question for correctness
  bool checker(const Question&);

  // takes user's answer
  bool input();

  //asks the question and gets an answer
  bool processQuestion(const Question&);
};
#endif //CONSOLE_GAME_TURN_H