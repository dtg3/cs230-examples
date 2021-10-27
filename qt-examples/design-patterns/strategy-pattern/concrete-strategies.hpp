#ifndef CONCRETESTRAGEGIES_HPP
#define CONCRETESTRAGEGIES_HPP

#include "strategy.hpp"

class ConcreteStrategyA: public Strategy
{
public:
   void execute() const override;
};

class ConcreteStrategyB: public Strategy
{
public:
   void execute() const override;
};

class ConcreteStrategyC: public Strategy
{
public:
   void execute() const override;
};


#endif // CONCRETESTRAGEGIES_HPP
