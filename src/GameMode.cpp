//
// Created by artur on 21.03.2021.
//

#include "GameMode.h"
int GameMode::readDifficulty() {
    std::cout << "please, choose difficulty:\n1 - easy\n2 - hard\n";
    int difficulty;
    std::cin >> difficulty;
    return difficulty;
}

std::vector<Question> GameMode::generateQuestionPoolMedium(){}

std::vector<Question> GameMode::generateQuestionPoolHard(){}

std::pair<std::vector<Stats*>, std::vector<Question>> GameMode::setDifficulty(int x) {
    OrdinaryStatsFabric ordinary_stats_fabric;
    std::vector<Stats*> stats_result;
    stats_result.push_back(ordinary_stats_fabric.factoryMethod(10, "People"));
    stats_result.push_back(ordinary_stats_fabric.factoryMethod(10, "Army"));
    stats_result.push_back(ordinary_stats_fabric.factoryMethod(10, "Church"));
    stats_result.push_back(ordinary_stats_fabric.factoryMethod(10, "Money"));
    if (x != 1) {
        CountryStatsFabric country_stats_fabric;
        stats_result.push_back(country_stats_fabric.factoryMethod(10, "Liberia"));
    }
    std::vector<Question> question_result;
    return {stats_result, question_result};
}
