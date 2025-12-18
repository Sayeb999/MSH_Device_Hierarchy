/* File: GasDetector.h 
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 * Date: December 2025
 * Description: Defines the class structure and logic for this device type.
 * Part of the Smart Home Automation System (MSH).
*/

#ifndef GASDETECTOR_H
#define GASDETECTOR_H
#include "Detector.h"


// Concrete class for Gas/Smoke detection.
// Inherits from Detector -> Device.
class GasDetector : public Detector {
private:
    double gasLevel;

public:
    GasDetector(int id, std::string name) : Detector(id, name), gasLevel(0.0) {}

    // Safety Override
    void turnOff() {
        std::cout << "CRITICAL WARNING: Cannot turn off Gas Detector!" << std::endl;
    }

    // Returns a formatted string status including specific gas levels.
    // Uses stringstream for C++98 compatibility.
    std::string status() {
        std::stringstream ss;
        ss << "GasDetector ID: " << id << " | Name: " << name 
           << " | Power: ALWAYS ON" 
           << " | Gas Level: " << gasLevel;
        return ss.str();
    }
};
#endif
