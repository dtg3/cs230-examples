#include "concrete-strategies.hpp"
#include <iostream>

void ConcreteStrategyA::execute() const
{
    std::cout << "executing strategy A\n";
}

void ConcreteStrategyB::execute() const
{
    std::cout << "executing strategy B\n";
}

void ConcreteStrategyC::execute() const
{
    std::cout << "executing strategy C\n";
}
