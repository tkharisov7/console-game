//
// Created by Timur Kharisov on 20.03.2021.
//

#include "QuestionFabric.h"

Question* OrdinaryQuestionFabric::factoryMethod() const

override {
return new

OrdinaryQuestion();

}

Question* CountryQuestionFabric::factoryMethod() const

override {
return new

CountryQuestion();

}