/**
 * Concrete Creators override the factory method in order to change the
 * resulting product's type.
 */

#ifndef CIRCLECREATOR_HPP
#define CIRCLECREATOR_HPP

#include "shape-creator.hpp"
#include "circle.hpp"

class CircleCreator : public ShapeCreator
{
 public:
  CircleCreator(int r);
  Shape* FactoryMethod() const override;

 private:
  int radius;

};

#endif // CIRCLECREATOR_HPP
