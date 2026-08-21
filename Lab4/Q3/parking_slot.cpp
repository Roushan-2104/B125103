#include <iostream>
#include <string>
using namespace std;

class ParkingSlot {
private:
    int slotNumber;
    string vehicleNumber;
    bool isOccupied;

public:
    ParkingSlot(int slot, string vehicle, bool occupied) {
        slotNumber = slot;
        vehicleNumber = vehicle;
        isOccupied = occupied;
    }

    friend void checkSlot(ParkingSlot p);
};

void checkSlot(ParkingSlot p) {
    cout << "----- Parking Slot Details -----" << endl;
    cout << "Slot Number: " << p.slotNumber << endl;

    if (p.isOccupied) {
        cout << "Status     : Occupied" << endl;
        cout << "Vehicle No.: " << p.vehicleNumber << endl;
    } else {
        cout << "Status     : Available" << endl;
    }
}

int main() {
    ParkingSlot slot1(101, "OD-02-AB-1234", true);
    checkSlot(slot1);

    cout << endl;

    ParkingSlot slot2(102, "", false);
    checkSlot(slot2);

    return 0;
}
