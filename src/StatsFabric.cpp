//
// Created by Timur Kharisov on 20.03.2021.
//

#include "StatsFabric.h"

Stats* OrdinaryStatsFabric::factoryMethod(int arg_points, const std::string& arg_name) const {
    return new OrdinaryStats(arg_points, arg_name);
}

Stats* CountryStatsFabric::factoryMethod(int arg_points, const std::string& arg_name) const {
    return new CountryStats(arg_points, arg_name);
}