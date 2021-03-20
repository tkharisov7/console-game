//
// Created by Timur Kharisov on 20.03.2021.
//

#include "StatsFabric.h"

Stats* OrdinaryStatsFabric::factoryMethod() const {
    return new OrdinaryStats();
}

Stats* CountryStatsFabric::factoryMethod() const {
return new CountryStats();
}