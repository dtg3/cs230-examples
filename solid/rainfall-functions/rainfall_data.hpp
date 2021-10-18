/*
    rainfall_data.hpp

    Functions to support the generation of a rainfall report.
*/

#ifndef RAINFALL_DATA_HPP
#define RAINFALL_DATA_HPP

#include <iostream>
#include <vector>

namespace RainfallData {

    // Precondition: The CSV format is a floating point rainfall reading followed by a newline
    std::vector<double> readDataCSV(std::istream &input);

    // Precondition: The size of dataset is > 0
    double calculateAverageHourlyRainfall(const std::vector<double>& dataset);

    // Precondition: The size of dataset is > 0
    double calculateMaxHourlyRainfall(const std::vector<double>& dataset);
    
    void displayAverageHourlyRainfall(double avgRainfall);
    void displayMaxHourlyRainfall(double maxRainfall);

}

#endif
