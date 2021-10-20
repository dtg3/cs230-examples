/*
    rainfall_report.hpp - uses composition to hold a
    rainfall object to display report data.
*/

#ifndef RAINFALL_REPORT_HPP
#define RAINFALL_REPORT_HPP

#include "rainfall.hpp"

class RainfallReport {

    public:
        RainfallReport(const Rainfall&);
        void displayReport();

    private:
        const Rainfall* rainfallData;
        void displayAverageHourlyRainfall();
        void displayMaxHourlyRainfall();

};

#endif