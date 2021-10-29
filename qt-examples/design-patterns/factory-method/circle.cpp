#include "circle.hpp"

Circle::Circle(int r): radius(r) {}

std::string Circle::area() const
{
  return "Circle Area: " + std::to_string(radius * radius * PI);
}
