//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Stats.h"

//Constructor
Stats::Stats(int arg_points, const std::string& arg_name) : points(arg_points), name_of_stats(arg_name) {}

std::string Stats::statsOutput() const {
  return name_of_stats;
}

std::string StatsOutputDecorator::statsOutput() const {
  return this->stats_->statsOutput();
}

std::string ArmyStatsOutputDecorator::statsOutput() const {
  return "\U00002694" + StatsOutputDecorator::statsOutput() + ": " + std::to_string(points);  // crossing swords
}

std::string MoneyStatsOutputDecorator::statsOutput() const {
  return "\U0001F4B0" + StatsOutputDecorator::statsOutput() + ": " + std::to_string(points); // moneybag
}

std::string PeopleStatsOutputDecorator::statsOutput() const {
  return "\U0001F46A" + StatsOutputDecorator::statsOutput() + ": " + std::to_string(points); // family
}

std::string ChurchStatsOutputDecorator::statsOutput() const {
  return "\U000026EA" + StatsOutputDecorator::statsOutput() + ": " + std::to_string(points);  // church
}

std::string FijiStatsOutputDecorator::statsOutput() const {
  return "\U0001F1EB\U0001F1EF" + StatsOutputDecorator::statsOutput() + ": " + std::to_string(points); // FijiFlag
}

std::string NiueStatsOutputDecorator::statsOutput() const {
  return "\U0001F1F3\U0001F1FA" + StatsOutputDecorator::statsOutput() + ": " + std::to_string(points); // NiueFlag
}

std::string MayotteStatsOutputDecorator::statsOutput() const {
  return "\U0001F1FE\U0001F1F9" + StatsOutputDecorator::statsOutput() + ": " + std::to_string(points); // MayotteFlag
}

OrdinaryStats::OrdinaryStats() : Stats() {}

OrdinaryStats::OrdinaryStats(int arg_points, const std::string& arg_name) : Stats(arg_points, arg_name) {}

CountryStats::CountryStats() : Stats() {}

CountryStats::CountryStats(int arg_points, const std::string& arg_name) :
    Stats(arg_points, "relationship with country"),
    name_of_country(arg_name) {}

CountryStats::CountryStats(const Stats& a) : Stats(a) {}
