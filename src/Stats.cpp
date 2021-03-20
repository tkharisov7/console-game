//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Stats.h"

//Constructor
Stats::Stats(int a, std::string s): points(a), name_of_stats(s) {}

OrdinaryStats::OrdinaryStats() : Stats() {}

CountryStats::CountryStats() : Stats() {}

CountryStats::CountryStats(int a, std::string t) : Stats(a, "relationship with country"), name_of_country(t) {}
