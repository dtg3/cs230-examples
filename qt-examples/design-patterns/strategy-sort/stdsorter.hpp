#ifndef STDSORTER_HPP
#define STDSORTER_HPP

#include "sorter.hpp"
#include "ordered-collection.hpp"

// concrete strategy using STL sorting alg
class StdSorter: public Sorter
{
public:
   StdSorter(OrderedCollection *oc);
   void sort() const override;
};


#endif // STDSORTER_HPP
