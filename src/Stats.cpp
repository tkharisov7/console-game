//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Stats.h"

//Constructor
Stats::Stats(int a, std::string s): points(a), nameOfStats(s) {}

CountryStats::CountryStats(int a, std::string t) : Stats(a, "relationship with country"), nameOfCountry(t) {}
