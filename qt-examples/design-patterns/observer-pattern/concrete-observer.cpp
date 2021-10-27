#include "concrete-observer.hpp"
#include <iostream>

Observer::Observer(ISubject &subject) : subject(subject)
{
    this->subject.Attach(this);
    std::cout << "Hi, I'm the Observer \"" << ++Observer::static_number << "\".\n";
    this->number = Observer::static_number;
}

Observer::~Observer()
{
    std::cout << "Goodbye, I was the Observer \"" << this->number << "\".\n";
}

void Observer::Update(const std::string &messageFromSubject)
{
    this->messageFromSubject = messageFromSubject;
    PrintInfo();
}

void Observer::RemoveMeFromTheList()
{
    subject.Detach(this);
    std::cout << "Observer \"" << number << "\" removed from the list.\n";
}

void Observer::PrintInfo()
{
    std::cout << "Observer \"" << this->number << "\": a new message is available --> " << this->messageFromSubject << "\n";
}

