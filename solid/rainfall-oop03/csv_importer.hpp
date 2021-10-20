/*
    csv_importer.hpp - concrete implementation of a DataImporter class
*/

#ifndef CSV_IMPORTER_HPP
#define CSV_IMPORTER_HPP

#include <vector>
#include <iostream>
#include "data_importer.hpp"

class CSVImporter: public DataImporter {

    public:
        std::vector<double> importData() const;
};

#endif