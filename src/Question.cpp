//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Question.h"

Question::Question() : textOfQuestion(), impactOnStatsPositive(), impactOnStatsNegative() {}

OrdinaryQuestion::OrdinaryQuestion() : Question() {}

CountryQuestion::CountryQuestion(std::string s): nameOfCountry(s) {}

CountryQuestion::CountryQuestion(): nameOfCountry() {}