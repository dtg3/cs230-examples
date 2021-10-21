/*
    report.hpp - interface for all classes that will generate report data
*/

#ifndef REPORT_HPP
#define REPORT_HPP

#include <iostream>

class Report {
    public:
        // This is a pure virtual function
        //  every class that inherits Report must
        //  provide and implementation of this member.
        virtual void display() const = 0;
        virtual ~Report() {}
};

#endif