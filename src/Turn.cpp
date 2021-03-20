//
// Created by artur on 20.03.2021.
//

#include "Turn.h"
#include "Stats.h"
#include <iostream>

class Turn::logFromRun {
public:
    std::vector<Stats> impact;

    logFromRun(std::vector<Stats> impact) : impact(impact) {}
};

bool input() {
    bool answer;
    std::cin >> answer;
    return answer;
}

Turn::logFromRun Turn::run() {
    Question q;
    while (true) {
        q = getQuestion();
        if (checker(q)) {
            break;
        }
    }
    bool answer = processQuestion(q);
    return answer ? q.impactOnStatsPositive : q.impactOnStatsNegative;
}

Question Turn::getQuestion() {

}

bool Turn::checker(const Question& q) {

}

bool Turn::processQuestion(const Question& q) {
    std::cout << q.textOfQuestion << '\n';
    bool answer = input();
    return answer;
}