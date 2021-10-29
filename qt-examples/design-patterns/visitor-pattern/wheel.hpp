#ifndef WHEEL_HPP
#define WHEEL_HPP

#include "car-part-visitor.hpp"
#include "car-part.hpp"
#include <string>

// concrete element
class Wheel : public CarPart
{
public:
    Wheel() {};
    Wheel(const std::string &pos) : wheelLocation(pos) {}
    const std::string &getPlace() const;
    void accept(CarPartVisitor *v) override;
private:
   const std::string wheelLocation;
};

#endif // WHEEL_HPP
