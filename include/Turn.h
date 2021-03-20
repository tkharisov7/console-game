//
// Created by artur on 20.03.2021.
//

#ifndef CONSOLE_GAME_TURN_H
#define CONSOLE_GAME_TURN_H

#endif //CONSOLE_GAME_TURN_H

#include "QuestionFabric.h"
#include "StatsFabric.h"

class Turn {
// Fields:
public:

private:
// Classes:
    class logFromRun;
// Methods:
public:
    logFromRun run();
private:
    void getQuestion();
    bool checker(const Question&);

    bool processQuestion(const Question&);
    void processResultOfQuestion(bool);
};