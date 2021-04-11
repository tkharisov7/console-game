//
// Created by artur on 21.03.2021.
//

#ifndef CONSOLE_GAME_GAMEMODE_H
#define CONSOLE_GAME_GAMEMODE_H

#include <vector>
#include <iostream>
#include <fstream>
#include "StatsFabric.h"
#include "QuestionFabric.h"

class GameMode {
 public:
  static int readDifficulty();
  static std::pair<std::vector<Stats*>, QuestionPool*> setDifficulty(int);
 private:
  std::vector<Question> generateQuestionPoolMedium();
  std::vector<Question> generateQuestionPoolHard();
};
#endif //CONSOLE_GAME_GAMEMODE_H
