//
// Created by artur on 20.03.2021.
//

#include "Turn.h"
#include "Stats.h"
#include <iostream>

Turn::Turn(const std::vector<Stats*>& a, QuestionPool* b) : current_stats_(a), question_pool_(b) {}

bool Turn::input() {
  bool answer;
  std::cin >> answer;
  return answer;
}

std::vector<Stats*> Turn::run() {
  Question q;
  while (true) {
    q = getQuestion();
    if (checker(q))
      break;
  }
  bool answer = processQuestion(q);
  std::vector<Stats> delta = answer ? q.impact_on_stats_positive : q.impact_on_stats_negative;
  std::vector<Stats*> result = current_stats_;
  for (Stats* a : result) {
    for (const Stats& b : delta) {
      if (a->name_of_stats == b.name_of_stats) {
        a->points += b.points;
      }
    }
  }
  return current_stats_ = result;
}

Question Turn::getQuestion() {
  return Question();
}

bool Turn::checker(const Question& q) {
  int counter = 0;
  std::vector<Stats*> result = current_stats_;
  for (const Stats& a : q.impact_on_stats_positive) {
    for (Stats* b : result) {
      if (a.name_of_stats == b->name_of_stats) {
        b->points += a.points;
      }
    }
  }
  for (Stats* a : result)
    if (a->points <= 0) {
      counter++;
      break;
    }
  result = current_stats_;
  for (const Stats& a : q.impact_on_stats_negative) {
    for (Stats* b : result) {
      if (a.name_of_stats == b->name_of_stats) {
        b->points += a.points;
      }
    }
  }
  for (Stats* a : result)
    if (a->points <= 0) {
      counter++;
      break;
    }

  return counter != 2;
}

bool Turn::processQuestion(const Question& q) {
  q.printQuestion();
  bool answer = input();
  return answer;
}