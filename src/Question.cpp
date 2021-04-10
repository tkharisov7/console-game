//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Question.h"

Question::Question() : text_of_question(), impact_on_stats_positive(), impact_on_stats_negative() {}

std::string Question::questionOutput() const {}

OrdinaryQuestion::OrdinaryQuestion(const std::string& arg_text_of_question,
                                   const std::vector<Stats>& arg_impact_on_stats_positive,
                                   const std::vector<Stats>& arg_impact_on_stats_negative) {
  text_of_question = arg_text_of_question;
  impact_on_stats_positive = arg_impact_on_stats_positive;
  impact_on_stats_negative = arg_impact_on_stats_negative;
}

OrdinaryQuestion::OrdinaryQuestion() : Question() {}

CountryQuestion::CountryQuestion(const std::string& s, const std::string& arg_text_of_question,
                                 const std::vector<Stats>& arg_impact_on_stats_positive,
                                 const std::vector<Stats>& arg_impact_on_stats_negative) {
  name_of_country = s;
  text_of_question = arg_text_of_question;
  impact_on_stats_positive = arg_impact_on_stats_positive;
  impact_on_stats_negative = arg_impact_on_stats_negative;
}

CountryQuestion::CountryQuestion() : name_of_country() {}