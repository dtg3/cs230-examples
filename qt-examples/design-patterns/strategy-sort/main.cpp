#include <iostream>
#include <vector>

#include "sorter.hpp"
#include "ordered-collection.hpp"
#include "stdsorter.hpp"
#include "bubble-sorter.hpp"

using std::cout; using std::endl;
using std::vector;

int main() {
   vector<int> v={3,55,2,1,0};
   vector<int> v2=v;

   OrderedCollection vectorSorter;
   StdSorter ss(&vectorSorter);
   BubbleSorter bs(&vectorSorter);

   //
   // sorting short vectors to demo correctness
   //

   // STL sorter
   vectorSorter.setSorter(&ss);
   vectorSorter.setRange(v.begin(), v.end());

   for(auto number: v) cout << number << " "; cout << endl;
   vectorSorter.sort();
   cout << "STL sorted" << endl;
   for(auto number: v) cout << number << " "; cout << endl << endl;


   // BubbleSort sorter
   vectorSorter.setSorter(&bs);
   vectorSorter.setRange(v2.begin(), v2.end());

   for(auto number: v2) cout << number << " "; cout << endl;
   vectorSorter.sort();
   cout << "bubble sorted" << endl;
   for(auto number: v2) cout << number << " "; cout << endl << endl;
}
