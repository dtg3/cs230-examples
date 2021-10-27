#include "bubble-sorter.hpp"

BubbleSorter::BubbleSorter(OrderedCollection *oc): Sorter(oc) {}

void BubbleSorter::sort() const
{
    for (IntIterator first = collectionData->begin(); first != collectionData->end(); ++first ) {
        for (IntIterator second = collectionData->begin(); second < first; ++second) {
            if (*first < *second) {
                std::swap(*first, *second);
            }
        }
    }
}
