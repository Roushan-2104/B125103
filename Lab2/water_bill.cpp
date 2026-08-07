#include <iostream>
#include <string>
using namespace std;

class WaterBill {
private:
    long consumerNumber;
    string consumerName;
    float consumption;   // in litres
    float billAmount;

public:
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cout << "Enter Consumer Name: ";
        cin.ignore();
        getline(cin, consumerName);

        cout << "Enter Water Consumption (in litres): ";
        cin >> consumption;
    }

    void calculateBill() {
        float remaining = consumption;
        billAmount = 0;

        if (remaining <= 0) {
            billAmount = 0;
            return;
        }

        // First 500 litres Rs 2/litre
        if (remaining > 0) {
            float slab = (remaining < 500) ? remaining : 500;
            billAmount += slab * 2;
            remaining -= slab;
        }

        // Next 500 litres Rs 3/litre
        if (remaining > 0) {
            float slab = (remaining < 500) ? remaining : 500;
            billAmount += slab * 3;
            remaining -= slab;
        }

        // Above 1000 litres Rs 5/litre
        if (remaining > 0) {
            billAmount += remaining * 5;
        }
    }

    void display() {
        cout << "\n----- Water Bill Receipt -----" << endl;
        cout << "Consumer Number  : " << consumerNumber << endl;
        cout << "Consumer Name    : " << consumerName << endl;
        cout << "Water Consumption: " << consumption << " litres" << endl;
        cout << "Total Bill Amount: Rs. " << billAmount << endl;
    }
};

int main() {
    WaterBill bill;

    bill.acceptDetails();
    bill.calculateBill();
    bill.display();

    return 0;
}