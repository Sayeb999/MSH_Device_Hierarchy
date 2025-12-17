/*
 * File: Detector.h
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 */
#ifndef DETECTOR_H
#define DETECTOR_H
#include "Device.h"

// Intermediate abstract class for sensors
class Detector : public Device {
protected:
    int sensitivity;

public:
    Detector(int id, std::string name) : Device(id, name), sensitivity(5) {
        isOn = true;
    }

    // CRITICAL: Safety override
    void turnOff() {
        std::cout << "ERROR: Cannot turn off Safety Detector!" << std::endl;
    }
};
#endif
