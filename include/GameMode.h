//
// Created by artur on 21.03.2021.
//

#ifndef CONSOLE_GAME_GAMEMODE_H
#define CONSOLE_GAME_GAMEMODE_H

#include <chrono>
#include <fstream>
#include <thread>
#include <vector>
#include <iostream>
#include "StatsFabric.h"
#include "QuestionFabric.h"

class GameMode {
 public:
  static int readDifficulty();
  static std::pair<std::vector<Stats*>, QuestionPool*> setDifficulty(int);
 private:
  static QuestionPool* generateQuestionPoolMedium();
  static QuestionPool* generateQuestionPoolHard();
};
#endif //CONSOLE_GAME_GAMEMODE_H
