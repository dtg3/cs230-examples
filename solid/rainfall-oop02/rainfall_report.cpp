/*
    rainfall_report.hpp - uses composition to hold a
    rainfall object to display report data.
*/

#include <iostream>
#include <iomanip>
#include "rainfall_report.hpp"

RainfallReport::RainfallReport(const Rainfall& data): rainfallData(&data) {}

// With the Rainfall object all data can be generated and the reporting is self-contained
void RainfallReport::displayReport() {
    displayAverageHourlyRainfall();
    displayMaxHourlyRainfall();
}

void RainfallReport::displayAverageHourlyRainfall() {
    std::cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << rainfallData->calculateAverageHourlyRainfall() << " hundreds of inches" << '\n';   
}

void RainfallReport::displayMaxHourlyRainfall() {
    std::cout << "Heaviest Hourly Rainfall: " << rainfallData->calculateMaxHourlyRainfall() << " hundreds of inches" << '\n';
}