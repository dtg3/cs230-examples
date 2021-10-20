/* 
    data-importer.cpp - interface to describe the functions required
    for each of the classes that import rainfall data
*/

#include <iostream>
#include "csv_importer.hpp"

std::vector<double> CSVImporter::importData() const {
    return std::vector<double>(std::istream_iterator<double>(std::cin), std::istream_iterator<double>());
}