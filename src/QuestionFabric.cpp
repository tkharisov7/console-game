//
// Created by Timur Kharisov on 20.03.2021.
//

#include "QuestionFabric.h"

Question* OrdinaryQuestionFabric::factoryMethod(const std::string& text, const std::vector<Stats>& pos_stats,
        const std::vector<Stats>& neg_stats) const {
    return new OrdinaryQuestion(text, pos_stats, neg_stats);

}

Question* CountryQuestionFabric::factoryMethod(const std::string& text, const std::vector<Stats>& pos_stats,
                                               const std::vector<Stats>& neg_stats) const {
    return new CountryQuestion("Default country", text, pos_stats, neg_stats);
}