//
// Created by Timur Kharisov on 20.03.2021.
//

#include "StatsFabric.h"

Stats* OrdinaryStatsCreator::createStats(int arg_points, const std::string& arg_name) const {
    return new OrdinaryStats(arg_points, arg_name);
}

Stats* CountryStatsCreator::createStats(int arg_points, const std::string& arg_name) const {
    return new CountryStats(arg_points, arg_name);
}