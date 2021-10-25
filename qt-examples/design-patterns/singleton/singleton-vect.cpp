#include "singleton-vect.hpp"
#include <iostream>

SingletonVect& SingletonVect::instance()
{
    static SingletonVect s;
    return s;
}

void SingletonVect::addChar(char c)
{
    chars.push_back(c);
}

void SingletonVect::print()
{
    for (auto c: chars)
    {
        std::cout << c << " \n";
    }
}
