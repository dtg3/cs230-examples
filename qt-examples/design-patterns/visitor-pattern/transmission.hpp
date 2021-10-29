#ifndef TRANSMISSION_HPP
#define TRANSMISSION_HPP

#include <car-part-visitor.hpp>
#include <car-part.hpp>

// concrete element
class Transmission : public CarPart
{
public:
    Transmission() {};
    void accept(CarPartVisitor *v) override;
};

#endif // TRANSMISSION_HPP
