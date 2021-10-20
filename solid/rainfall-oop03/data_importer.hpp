/* 
    data-importer.hpp - interface to describe the functions required
    for each of the classes that import rainfall data
*/
#ifndef DATA_IMPORTER_HPP
#define DATA_IMPORTER_HPP

#include <vector>

class DataImporter {

    public:
        // All classes that inherit from this interface must implement this function
        virtual std::vector<double> importData() const = 0;
};

#endif