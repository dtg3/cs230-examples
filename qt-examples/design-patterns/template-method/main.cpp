#include <iostream>
#include "weekday-routine.hpp"
#include "weekend-routine.hpp"

/**
 * The client code calls the template method to execute the algorithm. Client
 * code does not have to know the concrete class of an object it works with, as
 * long as it works with objects through the interface of their base class.
 */
void ClientCode(DailyRoutine *class_) {
  // ...
  class_->StartDailyRoutine();
  // ...
}

int main() {
  std::cout << "Same client code can work with different subclasses:\n";
  WeekdayRoutine *concreteClass1 = new WeekdayRoutine;
  ClientCode(concreteClass1);
  std::cout << "\n";
  std::cout << "Same client code can work with different subclasses:\n";
  WeekendRoutine *concreteClass2 = new WeekendRoutine;
  ClientCode(concreteClass2);
  delete concreteClass1;
  delete concreteClass2;
  return 0;
}
