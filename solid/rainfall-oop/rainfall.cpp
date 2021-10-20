/*
    rainfall.cpp

    Rainfall report. Individual rain amounts per hour are input. Output is the average
    and heaviest hourly rainfall.
*/

#include <iterator>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <exception>
#include "rainfall.hpp"

Rainfall::Rainfall(std::istream& input): 
rainfallData(std::istream_iterator<double>(input), std::istream_iterator<double>()) {
    if (!rainfallData.size()) {
       throw std::logic_error("Empty Dataset");
    }
}
double Rainfall::calculateAverageHourlyRainfall() {
    return std::accumulate(rainfallData.begin(), rainfallData.end(), 0.0) / rainfallData.size();
}

double Rainfall::calculateMaxHourlyRainfall() {
    return *std::max_element(rainfallData.begin(), rainfallData.end());
}

void Rainfall::printReport() {
    std::cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << calculateAverageHourlyRainfall() << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << calculateMaxHourlyRainfall() << " hundreds of inches" << '\n';
}
