/* File: Alarm.h 
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 * Date: December 2025
 * Description: Defines the class structure and logic for this device type.
 * Part of the Smart Home Automation System (MSH).
 */

#ifndef ALARM_H
#define ALARM_H
#include "Device.h"


// Represents the master security alarm.
// INHERITANCE: Inherits directly from Device.
class Alarm : public Device {
private:
    bool isActive;

public:
    Alarm(int id, std::string name) : Device(id, name), isActive(false) {
        isOn = true;
    }

    // SAFETY OVERRIDE:
    // This function overrides the standard turnOff() to prevent 
    // the alarm from being disabled manually by the user.
    // Requirement LLR-024.
    void turnOff() {
        std::cout << "ERROR: Cannot turn off Alarm system manually!" << std::endl;
    }

    std::string status() {
        std::stringstream ss;
        ss << "Alarm ID: " << id << " | Name: " << name 
           << " | Power: ALWAYS ON" 
           << " | Active Alert: " << (isActive ? "YES" : "NO");
        return ss.str();
    }
};
#endif
