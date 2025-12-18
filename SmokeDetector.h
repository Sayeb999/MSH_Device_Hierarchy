/* File: SmokeDetector.h 
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 * Date: December 2025
 * Description: Defines the class structure and logic for this device type.
 * Part of the Smart Home Automation System (MSH).
*/

#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H
#include "Detector.h"

// Concrete class for Smoke detection.
// Inherits from Detector -> Device.
class SmokeDetector : public Detector {
private:
    double smokeLevel;

public:
    SmokeDetector(int id, std::string name) : Detector(id, name), smokeLevel(0.0) {}

    // Returns a formatted string status including specific smoke levels.
    // Uses stringstream for C++98 compatibility.
    std::string status() {
        std::stringstream ss;
        ss << "SmokeDetector ID: " << id << " | Name: " << name 
           << " | Power: ON" 
           << " | Level: " << smokeLevel;
        return ss.str();
    }
};
#endif
