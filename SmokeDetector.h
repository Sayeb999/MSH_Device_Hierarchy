/* File: SmokeDetector.h */
#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H
#include "Detector.h"

class SmokeDetector : public Detector {
private:
    double smokeLevel;

public:
    SmokeDetector(int id, std::string name) : Detector(id, name), smokeLevel(0.0) {}

    std::string status() {
        std::stringstream ss;
        ss << "SmokeDetector ID: " << id << " | Name: " << name 
           << " | Power: ON" 
           << " | Level: " << smokeLevel;
        return ss.str();
    }
};
#endif
