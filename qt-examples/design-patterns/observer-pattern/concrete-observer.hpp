#ifndef CONCRETEOBSERVER_HPP
#define CONCRETEOBSERVER_HPP

#include "observer.hpp"
#include "subject.h"

class Observer : public IObserver
{
 public:
    Observer(ISubject &subject);
    virtual ~Observer();
    void Update(const std::string &messageFromSubject) override;
    void RemoveMeFromTheList();
    void PrintInfo();

 private:
    std::string messageFromSubject;
    ISubject &subject;
    static int static_number;
    int number;
};


#endif // CONCRETEOBSERVER_HPP
