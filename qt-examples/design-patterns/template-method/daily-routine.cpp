#include "daily-routine.hpp"
#include <iostream>

void DailyRoutine::StartDailyRoutine() const
{
  WakeUp();
  GetReady();
  MorningRoutine();
  Hook1();
  EveningRoutine();
  Hook2();
  GoToBed();
}

void DailyRoutine::WakeUp() const
{
  std::cout << "Time to wakeup!\n";
}

void DailyRoutine::GetReady() const
{
  std::cout << "Get washed and ready!\n";
}

void DailyRoutine::GoToBed() const
{
  std::cout << "Time to get some sleep!\n";
}
