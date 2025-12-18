/* File: Camera.h 
 * Author: Sayeb Ul Malik
 * Role: Device Hierarchy Implementation
 * Date: December 2025
 * Description: Defines the class structure and logic for this device type.
 * Part of the Smart Home Automation System (MSH).
*/

#ifndef CAMERA_H
#define CAMERA_H
#include "Device.h"



// Concrete class representing a Security Camera.
// Note: While critical for security, this device currently allows
// manual power control (unlike Alarms).
class Camera : public Device {
private:
    std::string resolution;
    bool isRecording;

public:
    Camera(int id, std::string name) : Device(id, name), resolution("1080p"), isRecording(false) {
        isOn = true; 
    }
  
// Reports resolution and whether the camera is currently recording footage.
    std::string status() {
        std::stringstream ss;
        ss << "Camera ID: " << id << " | Name: " << name 
           << " | Power: " << (isOn ? "ON" : "OFF")
           << " | Res: " << resolution 
           << " | Recording: " << (isRecording ? "YES" : "NO");
        return ss.str();
    }
};
#endif
