/*
    rainfall.hpp

    Rainfall report. Individual rain amounts per hour are input. Output is the average
    and heaviest hourly rainfall.
*/
#ifndef RAINFALL_HPP
#define RAINFALL_HPP

#include <vector>
#include <iostream>
#include "report.hpp"
#include "data_importer.hpp"

class Rainfall {
    public:
        Rainfall(const DataImporter&);
        double calculateAverageHourlyRainfall() const;
        double calculateMaxHourlyRainfall() const;
        void addReport(const Report&);
        void runReports();

    private:
        std::vector<double> rainfallData;  
        std::vector<const Report*> reports;
        const DataImporter* importer;

};

#endif