/**
 * Concrete Products provide various implementations of the Product interface.
*/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"
#include <string>

class Rectangle : public Shape
{
public:
  Rectangle(int l, int w);
  std::string area() const override;

 private:
   int length;
   int width;
};

#endif // RECTANGLE_HPP
