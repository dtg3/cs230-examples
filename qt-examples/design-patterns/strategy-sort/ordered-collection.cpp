#include "ordered-collection.hpp"

void OrderedCollection::setRange(IntIterator begin, IntIterator end)
{
    interatorBegin = begin; iteratorEnd = end;
}

void OrderedCollection::setSorter(Sorter *sorter)
{
    sortAlgorithm = sorter;
}

IntIterator OrderedCollection::begin() const
{
    return interatorBegin;
}

IntIterator OrderedCollection::end()  const
{
    return iteratorEnd;
}

void OrderedCollection::sort()
{
    sortAlgorithm->sort();
}
