//
// Created by artur on 20.03.2021.
//



#include "Game.h"
#include "GameMode.h"

int main() {
  GameMode game_mode;
  std::pair<std::vector<Stats*>, QuestionPool*> data = GameMode::setDifficulty(GameMode::readDifficulty());
  Game current_game(data.first, data.second);
  Game::run();
  return 0;
}