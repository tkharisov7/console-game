//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Stats.h"

//Constructor
Stats::Stats(int arg_points, const std::string& arg_name) : points(arg_points), name_of_stats(arg_name) {}

std::string Stats::statsOutput() const {}

std::string StatsOutputDecorator::statsOutput() const {
    return this->stats_->statsOutput();
}

std::string ArmyStatsOutputDecorator::statsOutput() const {
    return "\U00002694" + StatsOutputDecorator::statsOutput() + "\U00002694"; // crossing swords
}

std::string MoneyStatsOutputDecorator::statsOutput() const {
    return "\U0001F4B0" + StatsOutputDecorator::statsOutput() + "\U0001F4B0"; // moneybag
}

std::string PeopleStatsOutputDecorator::statsOutput() const {
    return "\U0001F46A" + StatsOutputDecorator::statsOutput() + "\U0001F46A"; // family
}

std::string ChurchStatsOutputDecorator::statsOutput() const {
    return "\U000026EA" + StatsOutputDecorator::statsOutput() + "\U000026EA"; // church
}

std::string FijiStatsOutputDecorator::statsOutput() const {
    return "\U0001F1EB\U0001F1EF" + StatsOutputDecorator::statsOutput() + "\U0001F1EB\U0001F1EF"; // FijiFlag
}

std::string NiueStatsOutputDecorator::statsOutput() const {
    return "\U0001F1F3\U0001F1FA" + StatsOutputDecorator::statsOutput() + "\U0001F1F3\U0001F1FA"; // NiueFlag
}

std::string MayotteStatsOutputDecorator::statsOutput() const {
    return "\U0001F1FE\U0001F1F9" + StatsOutputDecorator::statsOutput() + "\U0001F1FE\U0001F1F9"; // MayotteFlag
}

OrdinaryStats::OrdinaryStats() : Stats() {}

OrdinaryStats::OrdinaryStats(int arg_points, const std::string& arg_name) : Stats(arg_points, arg_name) {}

CountryStats::CountryStats() : Stats() {}

CountryStats::CountryStats(int arg_points, const std::string& arg_name) :
    Stats(arg_points, "relationship with country"),
    name_of_country(arg_name) {}
