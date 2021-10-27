#include "context.hpp"

Context::Context(Strategy *strategy): currentStrategy(strategy) {}

void Context::setStrategy(Strategy *strategy)
{
    currentStrategy = strategy;
}

void Context::execute() const
{
    currentStrategy->execute();
}
