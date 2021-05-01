//
// Created by artur on 29.04.2021.
//

#ifndef CONSOLE_GAME_COMMAND_H
#define CONSOLE_GAME_COMMAND_H

#include <string>
#include <iostream>


class Command {
public:
  virtual void execute();
};

class PrintQuestionCommand: public Command {
private:
  std::string text_;
  size_t width_;

public:

    PrintQuestionCommand(std::string text, size_t width) : Command(), text_(text), width_(width) {}

  void execute() override {
    for (int i = 0; i < width_; ++i) {
      std::cout << "=";
    }
    std::cout << "\n\n";
    std::vector<std::string> parsed_text;
    std::string buffer;
    for (int i = 0; i < text_.size(); ++i) {
      if (text_[i] == ' ') {
        parsed_text.push_back(buffer);
        buffer = "";
       } else {
        buffer += text_[i];
        std::cout << "\nlol";
      }
    }
    parsed_text.push_back(buffer);

    buffer = "";
    for (auto t : parsed_text) {
      if ((buffer + t).size() > 80) {
        std::cout << buffer << '\n';
        buffer = t;
      } else {
        buffer += " " + t;
      }
    }
    std::cout << buffer << '\n';

    for (int i = 0; i < width_; ++i) {
      std::cout << "=";
    }
  }
};

#endif //CONSOLE_GAME_COMMAND_H
