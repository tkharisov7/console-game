//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Question.h"
#include "Game.h"

Question::Question() : text_of_question("Empty question."),
    impact_on_stats_positive(),
    impact_on_stats_negative() {}

Question::Question(const std::string& name,
                   const std::vector<Stats>& pos,
                   const std::vector<Stats>& neg) : text_of_question(name),
                                                                impact_on_stats_positive(pos),
                                                                impact_on_stats_negative(neg) {}

std::string Question::questionOutput() const {
  return text_of_question;
}

void Question::printQuestion() const {
  SimpleTextPrintCommand* printing = new SimpleTextPrintCommand(questionOutput(), 80);
  printing->execute();
  delete printing;
}

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

QuestionPool::QuestionPool(const std::vector<std::string>& vec_file_name) {
  std::cout << vec_file_name.size() << std::endl;
  for (auto file_name : vec_file_name) {
    std::ifstream a(file_name);
    while (!a.eof()) {
      std::string s;
      std::getline(a, s);
      if (s.size() < 10) {
        break;
      }
      int positive_n, negative_n;
      std::vector<Stats> positive_stats;
      std::vector<Stats> negative_stats;
      a >> positive_n;
      for (int i = 0; i < positive_n; ++i) {
        std::string name;
        int delta;
        a >> name >> delta;
        positive_stats.emplace_back(delta, name);
      }
      a >> negative_n;
      for (int i = 0; i < negative_n; ++i) {
        std::string name;
        int delta;
        a >> name >> delta;
        negative_stats.emplace_back(delta, name);
      }
      std::string help;
      std::getline(a, help);
      questions_.emplace_back(s, positive_stats, negative_stats);
    }
  }
}

size_t QuestionPool::QuestionAmount() {
  return questions_.size();
}

Question QuestionPool::GetQuestion(const size_t ind) {
  return questions_[ind];
}