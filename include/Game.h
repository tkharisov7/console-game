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

// the instance of a game
class Game {
// Friends:
    friend class Turn;
// Fields:
public:


private:
    std::vector<Stats> player_stats_;
// Methods:
public:
    //Constructor
    Game();

    //Destructor
    ~Game();

    //Runs the game
    void run();

private:
    //Starts game tutorial in the start of the game session
    void startTutorial();

    //Ends the game when player dies
    void endGame();

    // processes player input
    void processInput();

    // renders the UI
    void render();
};


#endif //CONSOLE_GAME_GAME_H