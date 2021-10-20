/*
    main.cpp - Entry point for the rainfall application
*/

#include <iostream>
#include <exception>
#include "rainfall.hpp"
#include "rainfall_report.hpp"

int main() {

    // Try Catch block to ensure that we handle the exception thrown by
    //  the Rainfall constructor
    try {

        // Rainfall takes in a standard input for the constructor
        //  but the RainfallImporter class will handle the reading
        Rainfall rainfallData(std::cin);

        // Rainfall report is a separate object that uses rainfall data
        //  to generate the reports
        RainfallReport report(rainfallData);
        report.displayReport();
    }
    catch (std::exception e) {
        /* 
            NEVER CATCH AND EXCEPTION AND DO NOTHING WITH IT
            
            Even when working on small personal projects. This just hides the problem from
            you and makes the code more difficult to debug. Use a logging system to record it
            if you can recover from the error without impacting the user. If not, stop the
            program/or the action gracefully and display a clear error message on the Window/terminal
            to indicate what operation cannot be done and the problem.
        */
        std::cerr << "No Rainfall data received!\n";
        return 1; 
    }

    return 0;
}
