#include <iostream>
#include "singleton-vect.hpp"

void myFunc()
{
    SingletonVect::instance().addChar('z');
    SingletonVect::instance().print();
}

int main()
{
    SingletonVect::instance().addChar('a');
    SingletonVect::instance().addChar('b');
    SingletonVect::instance().addChar('c');
    SingletonVect::instance().print();

    SingletonVect &v = SingletonVect::instance();
    v.addChar('d');
    v.print();

    myFunc();
}
