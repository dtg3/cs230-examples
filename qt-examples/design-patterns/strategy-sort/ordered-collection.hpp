#ifndef ORDEREDCOLLECTION_HPP
#define ORDEREDCOLLECTION_HPP

#include <vector>
#include "sorter.hpp"

// shorthand for a vector iterator
typedef std::vector<int>::iterator IntIterator;

// context using the strategies
class OrderedCollection{
public:
   void setRange(IntIterator begin, IntIterator end);
   void setSorter(Sorter *sorter);
   IntIterator begin() const;
   IntIterator end()  const;
   void sort();
private:
   IntIterator interatorBegin;
   IntIterator iteratorEnd;
   Sorter *sortAlgorithm;
};

#endif // ORDEREDCOLLECTION_HPP
