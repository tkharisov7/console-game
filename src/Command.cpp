//
// Created by artur on 01.05.2021.
//

#include "Command.h"
#include <vector>
#include "Game.h"

void SimpleTextPrintCommand::execute()  {
  for (int i = 0; i < width_; ++i) {
    std::cout << "=";
  }
  std::cout << "\n\n";
  std::vector<std::string> parsed_text;
  std::string buffer;
  for (int i = 0; i < text_.size(); ++i) {
    if (text_[i] == ' ') {
      parsed_text.push_back(buffer);
      buffer = "";
    } else {
      buffer += text_[i];
    }
  }
  parsed_text.push_back(buffer);

  buffer = parsed_text[0];
  for (int i = 1; i < parsed_text.size(); ++i) {
    auto t = parsed_text[i];
    if ((buffer + t).size() > width_) {
      std::cout << buffer << '\n';
      buffer = t;
    } else {
      buffer += " " + t;
    }
  }
  std::cout << buffer << "\n\n";

  for (int i = 0; i < width_; ++i) {
    std::cout << "=";
  }
  std::cout << '\n';
}

void StatsPrintCommand::execute() {
  for (int i = 0; i < width_; ++i) {
    std::cout << "=";
  }
  std::cout << '\n';
  for (auto i : turn_->current_stats_) {
    if (i->name_of_stats == "People") {
      std::cout << PeopleStatsOutputDecorator(i).statsOutput() << '\n';
    }

    if (i->name_of_stats == "Army") {
      std::cout << ArmyStatsOutputDecorator(i).statsOutput() << '\n';
    }

    if (i->name_of_stats == "Church") {
      std::cout << ChurchStatsOutputDecorator(i).statsOutput() << '\n';
    }

    if (i->name_of_stats == "Money") {
      std::cout << MoneyStatsOutputDecorator(i).statsOutput() << '\n';
    }
    auto tmp = dynamic_cast<CountryStats*>(i);
    if (tmp == nullptr) {
      continue;
    }
    if (tmp->name_of_country == "") {
      std::cout << "ZHOPA" << '\n';
    }
    if (tmp->name_of_country == "Fiji") {
      std::cout << FijiStatsOutputDecorator(i).statsOutput() << '\n';
    }

    if (tmp->name_of_country == "Niue") {
      std::cout << NiueStatsOutputDecorator(i).statsOutput() << '\n';
    }

    if (tmp->name_of_country == "Mayotte") {
      std::cout << MayotteStatsOutputDecorator(i).statsOutput() << '\n';
    }

  }
}