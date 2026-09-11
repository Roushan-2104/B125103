#include <iostream>
#include <string>
using namespace std;

class Drone {
public:
    Drone(int id, int battery, int hours) : drone_id(id), battery_percentage(battery), flight_hours(hours) {}

    void updateBattery(int percentage) {
        battery_percentage = percentage;
    }

    void updateBatteryAndHours(int percentage, int hours) {
        battery_percentage = percentage;
        flight_hours = hours;
    }

    int getBattery() const {
        return battery_percentage;
    }

    int getHours() const {
        return flight_hours;
    }

    int getId() const {
        return drone_id;
    }

    friend void compareBattery(Drone& d1, Drone& d2);

private:
    int drone_id;
    int battery_percentage;
    int flight_hours;
};

void compareBattery(Drone& d1, Drone& d2) {
    if (d1.getBattery() > d2.getBattery()) {
         cout << "Drone " << d1.getId() << " has higher battery level." <<  endl;
    } else if (d1.getBattery() < d2.getBattery()) {
         cout << "Drone " << d2.getId() << " has higher battery level." <<  endl;
    } else {
         cout << "Both drones have the same battery level." <<  endl;
    }
}

int main() {
    Drone* drone1 = new Drone(1, 80, 2);
    Drone* drone2 = new Drone(2, 70, 3);

    compareBattery(*drone1, *drone2);

    drone1->updateBattery(70);
    drone2->updateBatteryAndHours(85, 4);

    compareBattery(*drone1, *drone2);

    delete drone1;
    delete drone2;

    return 0;
}
