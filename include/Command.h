//
// Created by artur on 29.04.2021.
//

#ifndef CONSOLE_GAME_COMMAND_H
#define CONSOLE_GAME_COMMAND_H

#include <string>
#include <iostream>

class Game;
class Turn;

class Command {
public:
  virtual void execute() = 0;
};

class SimpleTextPrintCommand: public Command {
private:
  std::string text_;
  size_t width_;

public:

    SimpleTextPrintCommand(std::string text, size_t width) : Command(), text_(text), width_(width) {}

  void execute() override;
};

class StatsPrintCommand: public Command {
private:
  Turn* turn_;
  size_t width_;
 public:
  StatsPrintCommand(Turn* current_turn, size_t num): turn_(current_turn), width_(num) {}

  void execute() override;

};

#endif //CONSOLE_GAME_COMMAND_H
