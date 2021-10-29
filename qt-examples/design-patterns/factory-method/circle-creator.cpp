#include "circle-creator.hpp"

CircleCreator::CircleCreator(int r): radius(r) {}

Shape* CircleCreator::FactoryMethod() const
{
  return new Circle(radius);
}
