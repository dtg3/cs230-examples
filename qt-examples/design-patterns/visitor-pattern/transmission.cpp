#include "transmission.hpp"

void Transmission::accept(CarPartVisitor *v)
{
    v->visit(this);
}
