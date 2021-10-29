#include "wheel.hpp"

const std::string& Wheel::getPlace() const
{
    return wheelLocation;
}

void Wheel::accept(CarPartVisitor *v)
{
    v->visit(this);
}
