//
// Created by Timur Kharisov on 20.03.2021.
//

#include "QuestionFabric.h"

OrdinaryQuestionFabric::Question* factoryMethod() const override {
  return new OrdinaryQuestion();
}


CountryQuestionFabric::Question* factoryMethod() const override {
  return new CountryQuestion();
}