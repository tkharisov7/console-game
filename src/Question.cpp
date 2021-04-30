//
// Created by Timur Kharisov on 20.03.2021.
//

#include "Question.h"
#include "Game.h"

Question::Question() : text_of_question(), impact_on_stats_positive(), impact_on_stats_negative() {}

Question::Question(const std::string& name,
                   const std::vector<Stats>& pos,
                   const std::vector<Stats>& neg,
                   const std::vector<Stats*>& arg_game_stats) : text_of_question(name),
                                                                impact_on_stats_positive(pos),
                                                                impact_on_stats_negative(neg),
                                                                game_stats(arg_game_stats) {}

std::string Question::questionOutput() const {
  return text_of_question;
}

void Question::printQuestion() const {
  PrintQuestionCommand* printing = new PrintQuestionCommand(questionOutput(), 80);
  printing->execute();
}

OrdinaryQuestion::OrdinaryQuestion(const std::string& arg_text_of_question,
                                   const std::vector<Stats>& arg_impact_on_stats_positive,
                                   const std::vector<Stats>& arg_impact_on_stats_negative,
                                   const std::vector<Stats*>& arg_game_stats) {
  text_of_question = arg_text_of_question;
  impact_on_stats_positive = arg_impact_on_stats_positive;
  impact_on_stats_negative = arg_impact_on_stats_negative;
  game_stats = arg_game_stats;
}

OrdinaryQuestion::OrdinaryQuestion() : Question() {}

CountryQuestion::CountryQuestion(const std::string& s, const std::string& arg_text_of_question,
                                 const std::vector<Stats>& arg_impact_on_stats_positive,
                                 const std::vector<Stats>& arg_impact_on_stats_negative,
                                 const std::vector<Stats*>& arg_game_stats) {
  name_of_country = s;
  text_of_question = arg_text_of_question;
  impact_on_stats_positive = arg_impact_on_stats_positive;
  impact_on_stats_negative = arg_impact_on_stats_negative;
  game_stats = arg_game_stats;
}

CountryQuestion::CountryQuestion() : name_of_country() {}

QuestionPool::QuestionPool(std::string file_name, Game* arg_current_game) {
  current_game_ = arg_current_game;
  std::ifstream a(file_name);
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
    questions_.emplace_back(s, positive_stats, negative_stats, current_game_->player_stats_);
  }
}