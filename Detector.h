/*
 * File: Detector.h
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 * Date: December 2025
 * Description: Defines the class structure and logic for this device type.
 * Part of the Smart Home Automation System (MSH).
 */

#ifndef DETECTOR_H
#define DETECTOR_H
#include "Device.h"


// Intermediate abstract class for all sensor-type devices (Smoke, Gas).
// Adds specific attributes like 'sensitivity' shared by all detectors.
class Detector : public Device {
protected:
    int sensitivity;

public:
    Detector(int id, std::string name) : Device(id, name), sensitivity(5) {
        isOn = true;
    }

        // All detectors are safety-critical and cannot be powered down.
    void turnOff() {
        std::cout << "ERROR: Cannot turn off Safety Detector!" << std::endl;
    }
};
#endif
