#ifndef BUBBLESORTER_HPP
#define BUBBLESORTER_HPP

#include "sorter.hpp"
#include "ordered-collection.hpp"

// concrete strategy using bubble sort
class BubbleSorter: public Sorter
{
public:
   BubbleSorter(OrderedCollection *oc);
   void sort() const override;
};

#endif // BUBBLESORTER_HPP
