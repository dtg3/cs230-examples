#ifndef RAINFALL_HPP
#define RAINFALL_HPP

#include <iostream>
#include <vector>

class Rainfall {
    public:
        Rainfall(std::istream&);
        double calculateAverageHourlyRainfall();
        double calculateMaxHourlyRainfall();
        void printReport();

    private:
        std::vector<double> rainfallData;

};

#endif