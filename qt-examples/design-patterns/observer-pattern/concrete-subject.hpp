#ifndef CONCRETESUBJECT_HPP
#define CONCRETESUBJECT_HPP

#include "subject.h"
#include <list>

/**
 * The Subject owns some important state and notifies observers when the state
 * changes.
 */

class Subject : public ISubject {
 public:
    virtual ~Subject();

    // The subscription management methods.
    void Attach(IObserver *observer) override;
    void Detach(IObserver *observer) override;
    void Notify() override;
    void CreateMessage(std::string message);
    void HowManyObserver();

    /**
     * Usually, the subscription logic is only a fraction of what a Subject can
     * really do. Subjects commonly hold some important business logic, that
     * triggers a notification method whenever something important is about to
     * happen (or after it).
     */
    void SomeBusinessLogic();

 private:
    std::list<IObserver *> listObserver;
    std::string message;
};

#endif // CONCRETESUBJECT_HPP
