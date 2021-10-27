#ifndef SORTER_HPP
#define SORTER_HPP

// abstract strategy
// strategy interface, pull method
class OrderedCollection;

class Sorter{
public:
   Sorter(OrderedCollection *oc): collectionData(oc) {}
   virtual void sort() const = 0;
protected:
   OrderedCollection *collectionData; // reference to context
};
#endif // SORTER_HPP
