#include "concrete-subject.hpp"
#include <iostream>

Subject::~Subject() {
    std::cout << "Goodbye, I was the Subject.\n";
}

// The subscription management methods.
void Subject::Attach(IObserver *observer)
{
    listObserver.push_back(observer);
}

void Subject::Detach(IObserver *observer)
{
    listObserver.remove(observer);
}

void Subject::Notify()
{
    std::list<IObserver *>::iterator iterator = listObserver.begin();
    HowManyObserver();
    while (iterator != listObserver.end())
    {
        (*iterator)->Update(message);
        ++iterator;
    }
}

void Subject::CreateMessage(std::string message = "Empty")
{
    this->message = message;
    Notify();
}

void Subject::HowManyObserver()
{
    std::cout << "There are " << listObserver.size() << " observers in the list.\n";
}

/**
 * Usually, the subscription logic is only a fraction of what a Subject can
 * really do. Subjects commonly hold some important business logic, that
 * triggers a notification method whenever something important is about to
 * happen (or after it).
 */
void Subject::SomeBusinessLogic()
{
    this->message = "change message message";
    Notify();
    std::cout << "I'm about to do some thing important\n";
}
