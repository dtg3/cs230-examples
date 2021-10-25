#ifndef WEEKDAYROUTINE_HPP
#define WEEKDAYROUTINE_HPP

#include "daily-routine.hpp"

/**
 * Concrete classes have to implement all abstract operations of the base class.
 * They can also override some operations with a default implementation.
 */
class WeekdayRoutine : public DailyRoutine
{
 protected:
  void MorningRoutine() const override;

  void EveningRoutine() const override;

  void Hook1() const override;
};

#endif // WEEKDAYROUTINE_HPP
