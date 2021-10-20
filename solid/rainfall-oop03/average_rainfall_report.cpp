/*
    average_rainfall_report.cpp - Class dedicated to dealing with displaying
    average rainfall data on the output report.
*/

#include <iostream>
#include <iomanip>
#include "average_rainfall_report.hpp"

AverageHourlyRainfall::AverageHourlyRainfall(double avg): averageRainfallValue(avg) {}

// This is an implementation of the pure virtual function from Report
void AverageHourlyRainfall::display() const {
    std::cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << averageRainfallValue << " hundreds of inches" << '\n';   
}
