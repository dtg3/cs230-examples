#ifndef OPERATOR_HPP
#define OPERATOR_HPP

#include "car-part-visitor.hpp"
#include "engine.hpp"
#include "transmission.hpp"
#include "wheel.hpp"

// concrete vistor with state
class Operator : public CarPartVisitor
{
public:
    Operator(): ops(0) {};
    void visit(Engine *e) override;
    void visit(Transmission *t) override;
    void visit(Wheel *w) override;
private:
    // number of tasks the operator performs
    int ops;
};

#endif // OPERATOR_HPP
