//
// Created by artur on 20.03.2021.
//

#include "Turn.h"
#include "Stats.h"
#include <iostream>

Turn::Turn(std::vector<Stats> a): currentStats(a) {}

bool Turn::input() {
    bool answer;
    std::cin >> answer;
    return answer;
}

std::vector<Stats> Turn::run() {
    Question q;
    while (true) {
        q = getQuestion();
        if (checker(q)) {
            break;
        }
    }
    bool answer = processQuestion(q);
    std::vector<Stats> delta = answer ? q.impactOnStatsPositive : q.impactOnStatsNegative;
    std::vector<Stats> result = currentStats;
    for (Stats &a : result) {
        for (Stats &b : delta) {
            if (a.nameOfStats == b.nameOfStats) {
                a.points += b.points;
            }
        }
    }
    return currentStats = result;
}

Question Turn::getQuestion() {

}

bool Turn::checker(const Question& q) {
    int counter = 0;
    std::vector<Stats> result = currentStats;
    for (const Stats& a : q.impactOnStatsPositive) {
        for (Stats& b : result) {
            if (a.nameOfStats == b.nameOfStats) {
                b.points += a.points;
            }
        }
    }
    for (Stats& a : result)
        if (a.points <= 0) {
            counter++;
            break;
        }
    result = currentStats;
    for (const Stats& a : q.impactOnStatsNegative) {
        for (Stats& b : result) {
            if (a.nameOfStats == b.nameOfStats) {
                b.points += a.points;
            }
        }
    }
    for (Stats& a : result)
        if (a.points <= 0) {
            counter++;
            break;
        }

    return counter != 2;
}

bool Turn::processQuestion(const Question& q) {
    std::cout << q.textOfQuestion << '\n';
    bool answer = input();
    return answer;
}