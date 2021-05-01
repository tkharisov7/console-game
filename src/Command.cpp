//
// Created by artur on 01.05.2021.
//

#include "Command.h"


void SimpleTextPrintCommand::execute()  {
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
    }
  }
  parsed_text.push_back(buffer);

  buffer = parsed_text[0];
  for (int i = 1; i < parsed_text.size(); ++i) {
    auto t = parsed_text[i];
    if ((buffer + t).size() > 80) {
      std::cout << buffer << '\n';
      buffer = t;
    } else {
      buffer += " " + t;
    }
  }
  std::cout << buffer << "\n\n";

  for (int i = 0; i < width_; ++i) {
    std::cout << "=";
  }
}