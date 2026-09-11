#include <iostream>
#include <string>
using namespace std;

class Locker {
private:
    int lockerNumber;
    bool occupied;
     string* accessCode;
    int codeSize;

public:
    Locker(int lockerNumber) : lockerNumber(lockerNumber), occupied(false), accessCode(nullptr), codeSize(0) {}

    ~Locker() {
        delete[] accessCode;
    }

    void setCode(const  string& code) {
        if (accessCode == nullptr) {
            codeSize = code.length();
            accessCode = new  string[codeSize];
            for (int i = 0; i < codeSize; i++) {
                accessCode[i] = code[i];
            }
        } else {
            for (int i = 0; i < codeSize; i++) {
                accessCode[i] = code[i];
            }
        }
    }

    void setCodeAtPosition(int position, const  string& code) {
        if (position < 0 || position >= codeSize) {
             cerr << "Invalid position" <<  endl;
            return;
        }
        accessCode[position] = code;
    }

    void displayCode() {
        if (accessCode != nullptr) {
            for (int i = 0; i < codeSize; i++) {
                 cout << accessCode[i];
            }
        } else {
             cout << "Access code is not set" <<  endl;
        }
    }
};

int main() {
    int n;
     cout << "Enter the number of lockers: ";
     cin >> n;

    Locker** lockers = new Locker*[n];

    for (int i = 0; i < n; i++) {
        lockers[i] = new Locker(i + 1);
         cout << "Locker " << i + 1 << ": ";
        lockers[i]->displayCode();
    }

     cout << "\nEnter the access code for locker 1: ";
     cin >>  ws; 
     string code;
     getline( cin, code);

    lockers[0]->setCode(code);

     cout << "\nChange the access code at position 2 for locker 1 to 'abc': ";
    lockers[0]->setCodeAtPosition(2, "abc");
    lockers[0]->displayCode();

    
    for (int i = 0; i < n; i++) {
        delete lockers[i];
    }
    delete[] lockers;

    return 0;
}
