/*
 * File: Light.h
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 * Date: December 2025
 * Description: Concrete implementation of a Smart Light.
 * Manages brightness levels and color settings.
*/
#ifndef LIGHT_H
#define LIGHT_H
#include "Device.h"



// Concrete class representing a Smart Light.
// Inherits standard behavior from Device but adds lighting-specific data.
class Light : public Device {
private:
    int brightness;
    std::string color;

public:
    Light(int id, std::string name) : Device(id, name), brightness(100), color("White") {}

// Returns current state including brightness percentage and color.
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
