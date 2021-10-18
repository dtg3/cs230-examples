/*
    rainfall_data.cpp

    Functions to support the generation of a rainfall report.
*/

#include <iomanip>
#include <iterator>
#include <algorithm>
#include <numeric>
#include "rainfall_data.hpp"

// Precondition: The CSV format is a floating point rainfall reading followed by a newline
std::vector<double> RainfallData::readDataCSV(std::istream &input) {
    std::vector<double> dataset{ std::istream_iterator<double>(input), std::istream_iterator<double>() };
    return dataset;
}

// Precondition: The size of dataset is > 0 
double RainfallData::calculateAverageHourlyRainfall(const std::vector<double>& dataset) {
    return std::accumulate(dataset.begin(), dataset.end(), 0.0) / dataset.size();
}

// Precondition: The size of dataset is > 0 
double RainfallData::calculateMaxHourlyRainfall(const std::vector<double>& dataset) {
    return *std::max_element(dataset.begin(), dataset.end());
}

void RainfallData::displayAverageHourlyRainfall(double avgRainfall) {
    std::cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << avgRainfall << " hundreds of inches" << '\n';
}

void RainfallData::displayMaxHourlyRainfall(double maxRainfall) {
    std::cout << "Heaviest Hourly Rainfall: " << maxRainfall << " hundreds of inches" << '\n';
}