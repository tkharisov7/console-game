//
// Created by artur on 20.03.2021.
//



#include "Game.h"
#include "GameMode.h"

int main() {
  GameMode game_mode;
  std::pair<std::vector<Stats*>, std::vector<Question>> data = GameMode::setDifficulty(GameMode::readDifficulty());
  Game current_game(data.first, data.second);
  current_game.run();

  std::cout << "\U0001F1F3\U0001F1FA";
  return 0;
}