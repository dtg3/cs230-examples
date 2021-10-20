/*
    rainfall.cpp

    Rainfall report. Individual rain amounts per hour are input. Output is the average
    and heaviest hourly rainfall.
*/

#include <iterator>
#include <algorithm>
#include <numeric>
#include <exception>
#include "rainfall.hpp"

Rainfall::Rainfall(std::istream& input) {
    rainfallData = importer.importData(input);
    if (!rainfallData.size()) {
       throw std::logic_error("Empty Dataset");
    }
}

double Rainfall::calculateAverageHourlyRainfall() const {
    return std::accumulate(rainfallData.begin(), rainfallData.end(), 0.0) / rainfallData.size();
}

double Rainfall::calculateMaxHourlyRainfall() const {
    return *std::max_element(rainfallData.begin(), rainfallData.end());
}
