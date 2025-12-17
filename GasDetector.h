/* File: GasDetector.h */
#ifndef GASDETECTOR_H
#define GASDETECTOR_H
#include "Detector.h"

class GasDetector : public Detector {
private:
    double gasLevel;

public:
    GasDetector(int id, std::string name) : Detector(id, name), gasLevel(0.0) {}

    // Safety Override
    void turnOff() {
        std::cout << "CRITICAL WARNING: Cannot turn off Gas Detector!" << std::endl;
    }

    std::string status() {
        std::stringstream ss;
        ss << "GasDetector ID: " << id << " | Name: " << name 
           << " | Power: ALWAYS ON" 
           << " | Gas Level: " << gasLevel;
        return ss.str();
    }
};
#endif
