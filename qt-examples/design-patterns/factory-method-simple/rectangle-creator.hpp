/**
 * Concrete Creators override the factory method in order to change the
 * resulting product's type.
 */

#ifndef RECTANGLECREATOR_HPP
#define RECTANGLECREATOR_HPP

#include "shape-creator.hpp"
#include "rectangle.hpp"

class RectangleCreator : public ShapeCreator {
  /**
   * Note that the signature of the method still uses the abstract product type,
   * even though the concrete product is actually returned from the method. This
   * way the Creator can stay independent of concrete product classes.
   */
 public:
  RectangleCreator(int l, int w);
  Shape* FactoryMethod() const override;

 private:
  int length;
  int width;
};

#endif // RECTANGLECREATOR_HPP
