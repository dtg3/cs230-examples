/**
 * The Product interface declares the operations that all concrete products must
 * implement.
*/

#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>

class Shape
{
 public:
  virtual ~Shape() {}
  virtual std::string area() const = 0;
};

#endif // SHAPE_HPP
