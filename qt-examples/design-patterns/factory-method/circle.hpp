/**
 * Concrete Products provide various implementations of the Product interface.
*/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape {
 public:
  Circle(int r);
  std::string area() const override;

 private:
    int radius;
    static constexpr double PI = 3.14159265358979323846;
};


#endif // CIRCLE_HPP
