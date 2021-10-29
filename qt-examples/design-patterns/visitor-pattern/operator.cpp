#include "operator.hpp"
#include <iostream>

void Operator::visit(Engine *e)
{
    std::cout << "Operator starts engine; so far ops: " <<
                 ++ops << std::endl;
}

void Operator::visit(Transmission *t)
{
    std::cout << "Operator shifts transmission; so far ops: "
              << ++ops << std::endl;
}

void Operator::visit(Wheel *w)
{
    std::cout << "Operator turns "
              << w->getPlace()
              << " wheel; "
              << "so far ops: "
              << ++ops << std::endl;
}
