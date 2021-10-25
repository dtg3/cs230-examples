#ifndef DAILYROUTINE_HPP
#define DAILYROUTINE_HPP

class DailyRoutine
{
 // The template method defines the skeleton of an algorithm.
 public:
  void StartDailyRoutine() const;

 // These operations already have implementations
 protected:
  void WakeUp() const;
  void GetReady() const;
  void GoToBed() const;

  // These operations have to be implemented in subclasses
  virtual void MorningRoutine() const = 0;
  virtual void EveningRoutine() const = 0;

  /**
   * These are "hooks." Subclasses may override them, but it's not mandatory
   * since the hooks already have default (but empty) implementation. Hooks
   * provide additional extension points in some crucial places of the
   * algorithm.
   */
  virtual void Hook1() const {}
  virtual void Hook2() const {}

  virtual ~DailyRoutine() = default;
};

#endif // DAILYROUTINE_HPP
