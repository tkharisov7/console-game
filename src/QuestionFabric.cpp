//
// Created by Timur Kharisov on 20.03.2021.
//

#include "QuestionFabric.h"

Question* OrdinaryQuestionFabric::factoryMethod() const {
return new

OrdinaryQuestion();

}

Question* CountryQuestionFabric::factoryMethod() const {
return new

CountryQuestion();

}