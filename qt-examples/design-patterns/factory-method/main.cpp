#include <iostream>
#include <string>
#include "shape-creator.hpp"
#include "rectangle-creator.hpp"
#include "circle-creator.hpp"

void ClientCode(const ShapeCreator& creator) {
  // ...
  std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
            << creator.calcuateArea() << std::endl;
  // ...
}

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */

int main() {
  std::cout << "App: Launched with the ConcreteCreator1.\n";
  ShapeCreator* creator = new RectangleCreator(5, 3);
  ClientCode(*creator);
  std::cout << std::endl;
  std::cout << "App: Launched with the ConcreteCreator2.\n";
  ShapeCreator* creator2 = new CircleCreator(4);
  ClientCode(*creator2);

  delete creator;
  delete creator2;
  return 0;
}
