/*
    rainfall.cpp

    Rainfall report. Individual rain amounts per hour are input. Output is the average
    and heaviest hourly rainfall.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include "rainfall.hpp"

int main() {

    Rainfall rainfallData(std::cin);
    rainfallData.printReport();

    // std::vector<double> r{ std::istream_iterator<double>(std::cin), std::istream_iterator<double>() };
    // if (!r.size())
    //     return 1;

    // std::cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << std::accumulate(r.begin(), r.end(), 0.0) / r.size() << " hundreds of inches" << '\n';
    // std::cout << "Heaviest Hourly Rainfall: " << *std::max_element(r.begin(), r.end()) << " hundreds of inches" << '\n';

    return 0;
}
