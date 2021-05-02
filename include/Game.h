//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_GAME_H
#define CONSOLE_GAME_GAME_H

#include <vector>

//#include "Logs.h"
#include "StatsFabric.h"
#include "QuestionFabric.h"
#include "Turn.h"
#include "Question.h"

// the instance of a game
class Question;
class Stats;

class Game {
// Friends:
  friend class Turn;
  friend class QuestionPool;
  friend class StatsPrintCommand;
// Fields:
 public:

 private:
  std::vector<Stats*> player_stats_;
  QuestionPool* question_pool_;
// Methods:
 public:
  //Constructor
  Game();

  Game(const std::vector<Stats*>&, QuestionPool*);
  //Destructor
  ~Game();

  //Runs the game
  void run();

 private:
  //Starts game tutorial in the start of the game session
  void startTutorial();

  //Ends the game when player dies
  void endGame(const size_t);

  // processes player input
  void processInput();

  // renders the UI
  void render();

  //Checks whether player died or not.
  std::pair<bool, std::string> IsDead();
};

#endif //CONSOLE_GAME_GAME_H