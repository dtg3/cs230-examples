/*
    max_rainfall_report.cpp - Class dedicated to dealing with displaying
    max rainfall data on the output report.
*/
#include <iostream>
#include <iomanip>
#include "max_rainfall_report.hpp"

MaxHourlyRainfall::MaxHourlyRainfall(double max): maxRainfallValue(max) {}

// This is an implementation of the pure virtual function from Report
void MaxHourlyRainfall::display() const {
    std::cout << "Heaviest Hourly Rainfall: " << maxRainfallValue << " hundreds of inches" << '\n';
}