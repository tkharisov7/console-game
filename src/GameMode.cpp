//
// Created by artur on 21.03.2021.
//

#include "GameMode.h"
int GameMode::readDifficulty() {
  system("clear");
  std::string difficulty;
  std::cout << "please, choose difficulty:\n1 - easy\n2 - hard\n";
  std::getline(std::cin, difficulty);
  while (difficulty != "1" && difficulty != "2") {
    std::cout << "INCORRECT RESPONSE! Please, try again.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    system("clear");
    std::cout << "please, choose difficulty:\n1 - easy\n2 - hard\n";
    std::getline(std::cin, difficulty);
  }
  return difficulty == "1" ? 1 : 2;
}

QuestionPool* GameMode::generateQuestionPoolMedium() {
  return new QuestionPool({"../database/ordinarydatabase.txt"});
}

QuestionPool* GameMode::generateQuestionPoolHard() {
  return new QuestionPool({"../database/ordinarydatabase.txt", "../database/harddatabase.txt"});
}

std::pair<std::vector<Stats*>, QuestionPool*> GameMode::setDifficulty(int x) {
  OrdinaryStatsCreator ordinary_stats_creator;
  std::vector<Stats*> stats_result;
  stats_result.push_back(ordinary_stats_creator.createStats(10, "People"));
  stats_result.push_back(ordinary_stats_creator.createStats(10, "Army"));
  stats_result.push_back(ordinary_stats_creator.createStats(10, "Church"));
  stats_result.push_back(ordinary_stats_creator.createStats(10, "Money"));
  QuestionPool* question_result = nullptr;
  if (x != 1) {
    CountryStatsCreator country_stats_fabric;
    stats_result.push_back(country_stats_fabric.createStats(10, "Fiji"));
    stats_result.push_back(country_stats_fabric.createStats(10, "Niue"));
    stats_result.push_back(country_stats_fabric.createStats(10, "Mayotte"));
    question_result = GameMode::generateQuestionPoolHard();
  } else {
    question_result = GameMode::generateQuestionPoolMedium();
  }
  return {stats_result, question_result};
}
