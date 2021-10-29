#include <iostream>
#include <vector>
#include "car-part.hpp"
#include "car-part-visitor.hpp"
#include "engine.hpp"
#include "transmission.hpp"
#include "wheel.hpp"
#include "inspector.hpp"
#include "operator.hpp"

using std::cout; using std::endl;
using std::vector;

int main(){
    vector <CarPart *> parts = {
        new Transmission,
        new Engine,
        new Wheel("front center"),
        new Wheel("rear right"),
        new Wheel("rear left"),
        new Wheel("steering")
    };

    vector <CarPartVisitor *> visitors = {
        new Inspector,
        new Operator
    };

    for(auto e: parts){
        for(auto v: visitors)
            e->accept(v); // method is dispatched on
            // the basis of types of
            // both "e" and "v"
        cout << endl;
    }
}
