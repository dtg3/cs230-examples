#include "engine.hpp"

void Engine::accept(CarPartVisitor *v)
{
    v->visit(this);
}
