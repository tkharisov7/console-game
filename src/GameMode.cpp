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
    OrdinaryStatsCreator ordinary_stats_creator;
    std::vector<Stats*> stats_result;
    stats_result.push_back(ordinary_stats_creator.createStats(10, "People"));
    stats_result.push_back(ordinary_stats_creator.createStats(10, "Army"));
    stats_result.push_back(ordinary_stats_creator.createStats(10, "Church"));
    stats_result.push_back(ordinary_stats_creator.createStats(10, "Money"));
    if (x != 1) {
        CountryStatsCreator country_stats_fabric;
        stats_result.push_back(country_stats_fabric.createStats(10, "Liberia"));
    }
    std::vector<Question> question_result;
    return {stats_result, question_result};
}
