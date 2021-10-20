/*
    max_rainfall_report.hpp - Class dedicated to dealing with displaying
    max rainfall data on the output report.
*/

#ifndef MAX_HOURLY_RAINFALL_HPP
#define MAX_HOURLY_RAINFALL_HPP

#include "report.hpp"

class MaxHourlyRainfall: public Report {

    public:
        MaxHourlyRainfall(double);

        // Must have this!
        void display() const;

    private:
        double maxRainfallValue;
};

#endif