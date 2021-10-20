/*
    csv_importer.cpp - concrete implementation of a DataImporter class
*/

#include <iostream>
#include "csv_importer.hpp"

std::vector<double> CSVImporter::importData() const {
    return std::vector<double>(std::istream_iterator<double>(std::cin), std::istream_iterator<double>());
}