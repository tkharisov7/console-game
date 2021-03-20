//
// Created by artur on 20.03.2021.
//

#include "Turn.h"
#include "Stats.h"

class Turn::logFromRun {
public:
    std::vector<Stats> impact;

    logFromRun(std::vector<Stats> impact) : impact(impact) {}
};

bool input(std::ifstream& in) {
    bool answer;
    in >> answer;
    return answer;
}

logFromRun Turn::run() {
    Question q;
    while (true) {
        q = getQuestion();
        if (checker(q)) {
            break;
        }
    }

}

void Turn::getQuestion() {

}

bool Turn::checker(const Question& q) {

}

bool Turn

processQuestion(const Question& q) {
    std::cout << q.textOfQuestion << '\n';
    bool answer = input();
    return answer;
}