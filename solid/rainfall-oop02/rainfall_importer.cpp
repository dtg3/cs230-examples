/*
    rainfall_importer.hpp - simple class to support reading input
    rainfall data from a csv supplied by the terminal.
*/

#include "rainfall_importer.hpp"

// This function will give rainfall the ability to read input
//  without having to hold the algorithms to perform that action
std::vector<double> RainfallImporter::importData(std::istream& input) {
    return std::vector<double>(std::istream_iterator<double>(input), std::istream_iterator<double>());
}