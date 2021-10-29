#ifndef CARPART_HPP
#define CARPART_HPP

#include "car-part-visitor.hpp"

// abstract element
class CarPart
{
public:
    virtual void accept(class CarPartVisitor*) = 0;
};


#endif // CARPART_HPP
