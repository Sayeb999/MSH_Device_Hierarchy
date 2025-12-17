/*
 * File: Device.h
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 */
#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include <iostream>
#include <sstream>

// Abstract Base Class
class Device {
protected:
    int id;
    std::string name;
    bool isOn;

public:
    Device(int id, std::string name) : id(id), name(name), isOn(false) {}
    virtual ~Device() {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    bool getIsOn() const { return isOn; }

    virtual void turnOn() { isOn = true; }
    virtual void turnOff() { isOn = false; }
    
    // Pure virtual function
    virtual std::string status() = 0; 
};
#endif
