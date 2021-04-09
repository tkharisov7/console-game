//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Stats.h"

//Constructor
Stats::Stats(int arg_points, const std::string& arg_name) : points(arg_points), name_of_stats(arg_name) {}

OrdinaryStats::OrdinaryStats() : Stats() {}

OrdinaryStats::OrdinaryStats(int arg_points, const std::string& arg_name) : Stats(arg_points, arg_name) {}

CountryStats::CountryStats() : Stats() {}

CountryStats::CountryStats(int arg_points, const std::string& arg_name) :
    Stats(arg_points, "relationship with country"),
    name_of_country(arg_name) {}
