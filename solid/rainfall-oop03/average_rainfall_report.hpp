/*
    average_rainfall_report.hpp - Class dedicated to dealing with displaying
    average rainfall data on the output report.
*/

#ifndef AVERAGE_HOURLY_RAINFALL_HPP
#define AVERAGE_HOURLY_RAINFALL_HPP

#include "rainfall.hpp"
#include "report.hpp"

class AverageHourlyRainfall: public Report {

    public:
        AverageHourlyRainfall(double);

        // must have this!
        void display() const;

    private:
        double averageRainfallValue;
};

#endif