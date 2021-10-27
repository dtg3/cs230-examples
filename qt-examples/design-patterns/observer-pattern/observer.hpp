#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>

class IObserver {
 public:
    virtual ~IObserver(){};
    virtual void Update(const std::string &messageFromSubject) = 0;
};

#endif // OBSERVER_HPP
