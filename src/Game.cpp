//
// Created by artur on 20.03.2021.
//


#include "Game.h"
#include <iostream>

Game::Game(): player_stats_() {}
Game::~Game() {
    player_stats_.clear();
}

void Game::run() {
    startTutorial();
    endGame();
}

void Game::startTutorial() {
    std::cout << "HELLO!\n";
}


//Ends the game when player dies
void Game::endGame() {
    std::cout << "END of GAME\n";
}

// processes player input
void Game::processInput() {

}

// renders the UI
void Game::render() {

}