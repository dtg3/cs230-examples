#include <iostream>
#include "strategy.hpp"
#include "concrete-strategies.hpp"
#include "context.hpp"

int main() {
   // declaring strategy objects
   ConcreteStrategyA csA;
   ConcreteStrategyB csB;
   ConcreteStrategyC csC;

   // assigning particular strategies to contexts
   Context cA(&csA), cB(&csB), cC(&csC);

   // executing strategies
   cA.execute();
   cB.execute();
   cC.execute();

   // changing strategy at run-time
   cA.setStrategy(&csB);
   cA.execute();

}
