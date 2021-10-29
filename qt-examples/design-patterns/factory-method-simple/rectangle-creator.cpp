#include "rectangle-creator.hpp"

RectangleCreator::RectangleCreator(int l, int w): length(l), width(w) {}

Shape* RectangleCreator::FactoryMethod() const
{
  return new Rectangle(length, width);
}
