#ifndef CARPARTVISITOR_HPP
#define CARPARTVISITOR_HPP

// abstract visitor
class CarPartVisitor
{
public:
   virtual void visit(class Engine*) = 0;
   virtual void visit(class Transmission*) = 0;
   virtual void visit(class Wheel*) = 0;
};

#endif // CARPARTVISITOR_HPP
