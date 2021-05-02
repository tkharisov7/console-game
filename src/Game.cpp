//
// Created by artur on 20.03.2021.
//
#include "Game.h"
#include <iostream>
#include "Turn.h"
#include "GameMode.h"
#include <thread>

Game::Game() : player_stats_(), question_pool_() {}

Game::Game(const std::vector<Stats*>& stat_arg, QuestionPool* arg_question_pool) {
  for (Stats* stat : stat_arg) {
    player_stats_.push_back(stat);
  }
  question_pool_ = arg_question_pool;
}
Game::~Game() {
  for (auto i : player_stats_) {
    delete i;
  }
  delete question_pool_;
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
  system("clear");
  std::string s = "Greetings, my Lord! You are king of small country in the middle of Earth!\n"
                  "Your mission is to save your country as long as possible!";
  auto comm = new SimpleTextPrintCommand(s, 80);
  comm->execute();
  delete comm;
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

//Ends the game when player dies
void Game::endGame(const size_t years_amount) {
  std::string s = "END of GAME\n";
  s += "You have died because " + IsDead().second + '\n';
  s += "Congratulations! You have reined for " + std::to_string(years_amount ) + " years!\n";
  system("clear");
  auto comm = new SimpleTextPrintCommand(s, 80);
  comm->execute();
  delete comm;
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));
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