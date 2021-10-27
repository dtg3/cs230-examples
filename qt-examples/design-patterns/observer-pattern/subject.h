#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.hpp"

class ISubject {
 public:
    virtual ~ISubject(){};
    virtual void Attach(IObserver *observer) = 0;
    virtual void Detach(IObserver *observer) = 0;
    virtual void Notify() = 0;
};

#endif // SUBJECT_H
