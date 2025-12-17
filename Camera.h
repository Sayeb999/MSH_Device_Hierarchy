/* File: Camera.h */
#ifndef CAMERA_H
#define CAMERA_H
#include "Device.h"

class Camera : public Device {
private:
    std::string resolution;
    bool isRecording;

public:
    Camera(int id, std::string name) : Device(id, name), resolution("1080p"), isRecording(false) {
        isOn = true; 
    }

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
