#include <iostream>
#include <string>
using namespace std;

class LabSupervisor;

class Instrument {
    int instrumentID;
    string instrumentName;
    int accessLevel;

    friend class LabSupervisor;

public:
    Instrument(int id, string name, int level) {
        instrumentID = id;
        instrumentName = name;
        accessLevel = level;
    }

    void display() {
        cout << "Instrument ID: " << instrumentID << endl;
        cout << "Instrument Name: " << instrumentName << endl;
        cout << "Access Level: " << accessLevel << endl;
    }
};

class LabSupervisor {
    string supervisorName;

public:
    LabSupervisor(string name) {
        supervisorName = name;
    }

    void checkAccess(Instrument& inst) {
        cout << "Supervisor " << supervisorName << " checking access level of "
             << inst.instrumentName << ": " << inst.accessLevel << endl;
    }

    void modifyAccess(Instrument& inst, int newLevel) {
        inst.accessLevel = newLevel;
        cout << "Supervisor " << supervisorName << " modified access level of "
             << inst.instrumentName << " to " << newLevel << endl;
    }
};

int main() {
    Instrument* inst = new Instrument(1, "Spectrometer", 2);
    LabSupervisor supervisor("Dr. Sharma");

    cout << "Initial State:" << endl;
    inst->display();
    cout << "-----------------------------" << endl;

    supervisor.checkAccess(*inst);
    supervisor.modifyAccess(*inst, 5);

    cout << "-----------------------------" << endl;
    cout << "Updated State:" << endl;
    inst->display();

    delete inst;
    return 0;
}