/* File: Light.h */
#ifndef LIGHT_H
#define LIGHT_H
#include "Device.h"

class Light : public Device {
private:
    int brightness;
    std::string color;

public:
    Light(int id, std::string name) : Device(id, name), brightness(100), color("White") {}

    std::string status() {
        std::stringstream ss;
        ss << "Light ID: " << id << " | Name: " << name 
           << " | Power: " << (isOn ? "ON" : "OFF")
           << " | Brightness: " << brightness 
           << " | Color: " << color;
        return ss.str();
    }
};
#endif
