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

Rainfall::Rainfall(const DataImporter& inputSource): importer(&inputSource) {
    rainfallData = importer->importData();
    if (!rainfallData.size()) {
       throw std::logic_error("Empty Dataset");
    }
}

// Since all report object implement display, we can go through
//  out list of report objects and display their content
void Rainfall::runReports() {
    for (const auto& r : reports) {
        r->display();
    }
}

// Stores the report object, but doesn't need to know how they work
void Rainfall::addReport(const Report& reportOutput) {
    reports.push_back(&reportOutput);
}

double Rainfall::calculateAverageHourlyRainfall() const {
    return std::accumulate(rainfallData.begin(), rainfallData.end(), 0.0) / rainfallData.size();
}

double Rainfall::calculateMaxHourlyRainfall() const {
    return *std::max_element(rainfallData.begin(), rainfallData.end());
}
