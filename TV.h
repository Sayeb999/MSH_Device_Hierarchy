/* File: TV.h */
#ifndef TV_H
#define TV_H
#include "Device.h"

class TV : public Device {
private:
    int channel;
    int volume;

public:
    TV(int id, std::string name) : Device(id, name), channel(1), volume(20) {}

    std::string status() {
        std::stringstream ss;
        ss << "TV ID: " << id << " | Name: " << name 
           << " | Power: " << (isOn ? "ON" : "OFF")
           << " | Channel: " << channel 
           << " | Volume: " << volume;
        return ss.str();
    }
};
#endif
