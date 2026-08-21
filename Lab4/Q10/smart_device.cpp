#include <iostream>
#include <string>
using namespace std;

class HomeController; 

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus; // true = ON, false = OFF

public:
    SmartDevice(string name, string type, bool status) {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    friend class HomeController;
};

class HomeController {
public:
    void displayDeviceInfo(SmartDevice d) {
        cout << "----- Device Info -----" << endl;
        cout << "Device Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
    }

    void turnOn(SmartDevice &d) {
        d.powerStatus = true;
        cout << d.deviceName << " turned ON." << endl;
    }

    void turnOff(SmartDevice &d) {
        d.powerStatus = false;
        cout << d.deviceName << " turned OFF." << endl;
    }

    void showPowerStatus(SmartDevice d) {
        cout << "Power Status: " << (d.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice fan("Ceiling Fan", "Fan", false);

    HomeController controller;
    controller.displayDeviceInfo(fan);
    controller.showPowerStatus(fan);

    controller.turnOn(fan);
    controller.showPowerStatus(fan);

    controller.turnOff(fan);
    controller.showPowerStatus(fan);

    return 0;
}
