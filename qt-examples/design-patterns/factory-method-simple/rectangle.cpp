#include "rectangle.hpp"

Rectangle::Rectangle(int l, int w): length(l), width(w) {}

std::string Rectangle::area() const
{
  return "Square Area: " + std::to_string(length * width);
}
