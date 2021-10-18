/*
    rainfall.cpp

    Rainfall report. Individual rain amounts per hour are input. Output is the average
    and heaviest hourly rainfall.
*/

#include <iostream>
#include <vector>
#include "rainfall_data.hpp"

int main() {
    std::vector<double> rainfallDataset = RainfallData::readDataCSV(std::cin);
    
    if (!rainfallDataset.size())
        return 1;

    double averageRainfall = RainfallData::calculateAverageHourlyRainfall(rainfallDataset);
    RainfallData::displayAverageHourlyRainfall(averageRainfall);
    
    double maxRainfall = RainfallData::calculateMaxHourlyRainfall(rainfallDataset);
    RainfallData::displayMaxHourlyRainfall(maxRainfall);

    return 0;
}
