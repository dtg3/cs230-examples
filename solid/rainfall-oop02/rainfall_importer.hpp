/*
    rainfall_importer.hpp - simple class to support reading input
    rainfall data from a csv supplied by the terminal.
*/
#ifndef RAINFALL_IMPORTER_HPP
#define RAINFALL_IMPORTER_HPP

#include <vector>
#include <iostream>

class RainfallImporter {

    public:
        // This function will give rainfall the ability to read input
        //  without having to hold the algorithms to perform that action
        std::vector<double> importData(std::istream& input);
};

#endif