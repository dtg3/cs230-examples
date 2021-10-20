/*
    rainfall.hpp

    Rainfall report. Individual rain amounts per hour are input. Output is the average
    and heaviest hourly rainfall.
*/
#ifndef RAINFALL_HPP
#define RAINFALL_HPP

#include <vector>
#include <iostream>
#include "rainfall_importer.hpp"

class Rainfall {
    public:
        Rainfall(std::istream&);
        double calculateAverageHourlyRainfall() const;
        double calculateMaxHourlyRainfall() const;

    private:
        std::vector<double> rainfallData;     
        RainfallImporter importer;

};

#endif