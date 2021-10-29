#include "inspector.hpp"
#include <iostream>

void Inspector::visit(Engine *e)
{
    std::cout << "Inspector checks engine\n";
}

void Inspector::visit(Transmission *t)
{
    std::cout << "Inspector checks transmission\n";
}

void Inspector::visit(Wheel *w)
{
    std::cout << "Inspector checks " <<
                 w->getPlace() << " wheel\n";
}
