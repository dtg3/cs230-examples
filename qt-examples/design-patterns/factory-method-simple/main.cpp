#include <iostream>
#include <string>
#include "shape-creator.hpp"
#include "rectangle-creator.hpp"
#include "circle-creator.hpp"

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */

int main() {
  ShapeCreator* creator = new RectangleCreator(5, 3);

  Shape* s1 = creator->makeShape();
  std::cout << s1->area() << std::endl;

  ShapeCreator* creator2 = new CircleCreator(4);
  Shape* s2 = creator2->makeShape();
  std::cout << s2->area() << std::endl;

  delete s1;
  delete s2;
  delete creator;
  delete creator2;
  return 0;
}
