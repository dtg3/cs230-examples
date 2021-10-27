#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "strategy.hpp"

// context using the strategies
class Context
{
public:
   Context(Strategy *strategy);
   void setStrategy(Strategy *strategy);
   void execute() const;

private:
   Strategy *currentStrategy;
};

#endif // CONTEXT_HPP
