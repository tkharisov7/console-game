//
// Created by artur on 20.03.2021.
//


#include "Game.h"
#include <iostream>
#include "Turn.h"
#include "GameMode.h"
Game::Game() : player_stats_(), question_pool_() {}

Game::Game(const std::vector<Stats*>& stat_arg, QuestionPool* arg_question_pool) {
  for (Stats* stat : stat_arg) {
    player_stats_.push_back(stat);
  }
  question_pool_ = arg_question_pool;
}
Game::~Game() {
  player_stats_.clear();
}

void Game::run() {
  startTutorial();
  auto a = new Turn(player_stats_, question_pool_);
  size_t counter = 0;
  while (true) {
    render();
    a->run();
    ++counter;
    system("clear");
  }
  endGame(counter);
}

void Game::startTutorial() {
  std::cout << "HELLO!\n";
}

//Ends the game when player dies
void Game::endGame(const size_t years_amount) {
  std::cout << "END of GAME\n" << "Congratulations! You have reined for " << years_amount << " years!";
}

// processes player input
void Game::processInput() {

}

// renders the UI
void Game::render() {
  StatsPrintCommand* printing = new StatsPrintCommand(this, 80);
  printing->execute();
  delete printing;
}