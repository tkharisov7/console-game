//
// Created by artur on 20.03.2021.
//

#include "Turn.h"
#include "Stats.h"
#include <iostream>
#include <random>
#include <ctime>
#include <thread>
#include <Command.h>
std::mt19937 rnd(time(0));

Turn::Turn(const std::vector<Stats*>& a, QuestionPool* b) : current_stats_(a), question_pool_(b) {}

char Turn::input() {
  std::cout << "Your response (y/n)\n";
  std::string c;
  std::getline(std::cin, c);
  if (c == "") {
    std::getline(std::cin, c);
  }
  if (c.size() != 1) {
    return 'r';
  }
  return c[0];
}

void Turn::run() {
  system("clear");
  render();
  Question q;
  size_t cnt = 0;
  while (true) {
    q = getQuestion();
    ++cnt;
    if (checker(q) || cnt >= 5)
      break;
  }
  char answer = processQuestion(q);
  while (answer != 'y' && answer != 'n') {
    std::cout << "INCORRECT RESPONSE!\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    system("clear");
    render();
    answer = processQuestion(q);
  }
std::vector<Stats> delta = answer ? q.impact_on_stats_positive : q.impact_on_stats_negative;
  std::vector<Stats*> result = current_stats_;
  for (Stats* a : result) {
    for (const Stats& b : delta) {
      auto ptr = dynamic_cast<CountryStats*>(a);
      std::string par = (ptr == nullptr ? a->name_of_stats : ptr->name_of_country);
      if (par == b.name_of_stats) {
        a->points += b.points;
        if (a->points > highest_point) {
          a->points = highest_point;
        }
      }
    }
  }
  current_stats_ = result;
}

Question Turn::getQuestion() {
  size_t ind = (rnd() % question_pool_->QuestionAmount());
  return question_pool_->GetQuestion(ind);
}

bool Turn::checker(const Question& q) {
  return true;
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

void Turn::render() {
  StatsPrintCommand* printing = new StatsPrintCommand(this, 80);
  printing->execute();
  delete printing;
}

char Turn::processQuestion(const Question& q) {
  q.printQuestion();
  char answer = input();
  return answer;
}