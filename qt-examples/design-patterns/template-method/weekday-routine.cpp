#include "weekday-routine.hpp"
#include <iostream>

void WeekdayRoutine::MorningRoutine() const
{
  std::cout << "Grab a quick bowl of cereal\n";
}

void WeekdayRoutine::EveningRoutine() const
{
  std::cout << "Homework and Studying\n";
}

void WeekdayRoutine::Hook1() const
{
  std::cout << "Weekday: Gotta go to class!\n";
}
