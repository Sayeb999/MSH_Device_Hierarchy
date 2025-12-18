//For Testing. not for the project.


#include <iostream>
#include <vector>
#include "Device.h"
#include "Light.h"
#include "TV.h"
#include "Camera.h"
#include "Alarm.h"
#include "SmokeDetector.h"
#include "GasDetector.h"

int main() {
    std::cout << "=== STARTING SYSTEM DIAGNOSTIC ===\n" << std::endl;

    std::vector<Device*> myDevices;
    myDevices.push_back(new Light(101, "Living Room Light"));
    myDevices.push_back(new TV(102, "Samsung TV"));
    myDevices.push_back(new Camera(103, "Front Door Cam"));
    myDevices.push_back(new Alarm(999, "Main Home Alarm"));
    myDevices.push_back(new SmokeDetector(501, "Kitchen Smoke Sensor"));
    myDevices.push_back(new GasDetector(502, "Basement Gas Sensor"));

    std::cout << "--- PHASE 1: POWERING UP ---" << std::endl;
    for (size_t i = 0; i < myDevices.size(); ++i) {
        myDevices[i]->turnOn();
        std::cout << myDevices[i]->status() << std::endl;
    }

    std::cout << "\n--- PHASE 2: POWER DOWN TEST (Safety Check) ---" << std::endl;
    for (size_t i = 0; i < myDevices.size(); ++i) {
        std::cout << "Attempting to turn off: " << myDevices[i]->getName() << "..." << std::endl;
        myDevices[i]->turnOff(); 
    }

    for (size_t i = 0; i < myDevices.size(); ++i) {
        delete myDevices[i];
    }
    return 0;
}
