#ifndef WEEKENDROUTINE_HPP
#define WEEKENDROUTINE_HPP

#include "daily-routine.hpp"
/**
 * Usually, concrete classes override only a fraction of base class' operations.
 */
class WeekendRoutine : public DailyRoutine {
 protected:
  void MorningRoutine() const override;

  void Hook1() const override;

  void EveningRoutine() const override;
};

#endif // WEEKENDROUTINE_HPP
