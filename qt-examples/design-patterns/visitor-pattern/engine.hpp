#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "car-part.hpp"
#include "car-part-visitor.hpp"

// concrete element
class Engine : public CarPart
{
public:
    Engine() {};
    void accept(CarPartVisitor *v) override;
};

#endif // ENGINE_HPP
