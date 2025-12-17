/* File: Alarm.h */
#ifndef ALARM_H
#define ALARM_H
#include "Device.h"

class Alarm : public Device {
private:
    bool isActive;

public:
    Alarm(int id, std::string name) : Device(id, name), isActive(false) {
        isOn = true;
    }

    // Safety Override
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
