#ifndef INSPECTOR_HPP
#define INSPECTOR_HPP

#include "car-part-visitor.hpp"
#include "engine.hpp"
#include "wheel.hpp"
#include "transmission.hpp"

// concrete stateless visitor
class Inspector : public CarPartVisitor
{
public:
    Inspector() = default;
    void visit(Engine *e) override;
    void visit(Transmission *t) override;
    void visit(Wheel *w) override;
};

#endif // INSPECTOR_HPP
