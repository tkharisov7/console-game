//
// Created by Timur Kharisov on 20.03.2021.
//

#include "StatsFabric.h"

OrdinaryStatsFabric::factoryMethod() const override {
  return new OrdinaryStats();
}

CountryStatsFabric::factoryMethod() const override {
  return new CountryStats();
}