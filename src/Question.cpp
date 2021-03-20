//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Question.h"

Question::Question() : text_of_question(), impact_on_stats_positive(), impact_on_stats_negative() {}

OrdinaryQuestion::OrdinaryQuestion() : Question() {}

CountryQuestion::CountryQuestion(std::string s): name_of_country(s) {}

CountryQuestion::CountryQuestion(): name_of_country() {}