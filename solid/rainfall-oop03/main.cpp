#include "rainfall.hpp"
#include "csv_importer.hpp"
#include "average_rainfall_report.hpp"
#include "max_rainfall_report.hpp"

int main() {
    try {
        Rainfall rainfallData((CSVImporter()));

        double avgRainfall = rainfallData.calculateAverageHourlyRainfall();
        rainfallData.addReport(AverageHourlyRainfall(avgRainfall));

        double maxRainfall = rainfallData.calculateMaxHourlyRainfall();
        rainfallData.addReport(MaxHourlyRainfall(maxRainfall));

        rainfallData.runReports();
    }
    catch (std::exception e) {
        std::cerr << "No Rainfall data received!\n";
        return 1; 
    }

    return 0;
}
