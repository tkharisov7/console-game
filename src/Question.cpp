//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Question.h"

Question::Question() : text_of_question(), impact_on_stats_positive(), impact_on_stats_negative() {}

Question::Question(std::string name, std::vector<Stats> pos, std::vector<Stats> neg) : text_of_question(name),
        impact_on_stats_positive(pos), impact_on_stats_negative(neg) {}

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

void QuestionPool::extractQuestions(std::string fileName) {
    std::ifstream a(fileName);

    while (!a.eof()) {
        std::string s;
        char c;
        while (a >> c) {
            if (c == '$')
                break;
            s.push_back(c);
        }
        int positive_n, negative_n;
        std::vector<Stats> positive_stats;
        std::vector<Stats> negative_stats;
        a >> positive_n;
        for (int i = 0; i < positive_n; ++i) {
            std::string name;
            int delta;
            a >> delta >> name;
            positive_stats.emplace_back(delta, name);
        }
        a >> negative_n;
        for (int i = 0; i < negative_n; ++i) {
            std::string name;
            int delta;
            a >> delta >> name;
            negative_stats.emplace_back(delta, name);
        }
        questions_.emplace_back(s, positive_stats, negative_stats);
    }
}