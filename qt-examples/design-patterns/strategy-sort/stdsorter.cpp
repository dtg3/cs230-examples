#include "stdsorter.hpp"

StdSorter::StdSorter(OrderedCollection *oc): Sorter(oc){}

void StdSorter::sort() const {
   std::sort(collectionData->begin(), collectionData->end());
}
