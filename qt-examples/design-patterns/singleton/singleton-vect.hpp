#ifndef SINGLETON_VECT_HPP
#define SINGLETON_VECT_HPP

#include <vector>

class SingletonVect
{
public:
    static SingletonVect& instance();
    void addChar(char c);
    void print();


private:
    SingletonVect() = default;
    SingletonVect(const SingletonVect&) = delete;
    SingletonVect& operator=(const SingletonVect&) = delete;

    std::vector<char> chars;
};

#endif // SINGLETON_VECT_HPP
