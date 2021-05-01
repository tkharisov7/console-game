//
// Created by artur on 29.04.2021.
//

#ifndef CONSOLE_GAME_COMMAND_H
#define CONSOLE_GAME_COMMAND_H

#include <string>
#include <iostream>
#include <vector>


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
#endif //CONSOLE_GAME_COMMAND_H
