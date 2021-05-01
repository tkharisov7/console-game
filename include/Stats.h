//
// Created by Timur Kharisov on 20.03.2021.
//

#ifndef CONSOLE_GAME_STATS_H
#define CONSOLE_GAME_STATS_H

#include <string>

class Stats {
//Fields:
 public:
  int points{0};
  std::string name_of_stats;
//Methods:
 public:
  Stats() = default;
  //Constructor
  Stats(int, const std::string&);

  //Destructor
  ~Stats() = default;

  virtual std::string statsOutput() const;
};

class StatsOutputDecorator : public Stats {
 protected:
  Stats* stats_;
 public:
  StatsOutputDecorator(Stats* stats) : stats_(stats) {}

  std::string statsOutput() const override;
};

class ArmyStatsOutputDecorator : public StatsOutputDecorator {
 public:
  ArmyStatsOutputDecorator(Stats* stats) : StatsOutputDecorator(stats) {}

  std::string statsOutput() const override;
};

class MoneyStatsOutputDecorator : public StatsOutputDecorator {
 public:
  MoneyStatsOutputDecorator(Stats* stats) : StatsOutputDecorator(stats) {}

  std::string statsOutput() const override;
};

class PeopleStatsOutputDecorator : public StatsOutputDecorator {
 public:
  PeopleStatsOutputDecorator(Stats* stats) : StatsOutputDecorator(stats) {}

  std::string statsOutput() const override;
};

class ChurchStatsOutputDecorator : public StatsOutputDecorator {
 public:
  ChurchStatsOutputDecorator(Stats* stats) : StatsOutputDecorator(stats) {}

  std::string statsOutput() const override;
};

class FijiStatsOutputDecorator : public StatsOutputDecorator {
 public:
  FijiStatsOutputDecorator(Stats* stats) : StatsOutputDecorator(stats) {}

  std::string statsOutput() const override;
};

class NiueStatsOutputDecorator : public StatsOutputDecorator {
 public:
  NiueStatsOutputDecorator(Stats* stats) : StatsOutputDecorator(stats) {}

  std::string statsOutput() const override;
};

class MayotteStatsOutputDecorator : public StatsOutputDecorator {
 public:
  MayotteStatsOutputDecorator(Stats* stats) : StatsOutputDecorator(stats) {}

  std::string statsOutput() const override;
};

class OrdinaryStats : public Stats {
 public:
  OrdinaryStats();
  OrdinaryStats(int, const std::string&);
};

class CountryStats : public Stats {
  //Fields
 public:
  std::string name_of_country;
  //Methods
  CountryStats();
  CountryStats(int, const std::string&);
  CountryStats(const Stats& Stats);
};

#endif //CONSOLE_GAME_STATS_H