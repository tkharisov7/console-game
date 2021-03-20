//
// Created by artur on 20.03.2021.
//



#include "Game.h"
#include "GameMode.h"

int main() {
    GameMode game_mode;
    Game current_game(game_mode.setDifficulty(game_mode.readDifficulty()));
    current_game.run();

    return 0;
}