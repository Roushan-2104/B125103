#include <iostream>
#include <string>
using namespace std;

class HostelFee {
private:
    string studentName;
    int hostelID;
    float monthlyFee;
    int numberOfMonths;
    char isDelayed;      // 'Y' or 'N'
    float totalFee;
    float lateFine;
    float finalAmount;

public:
    void acceptDetails() {
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, studentName);

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        cout << "Is payment delayed? (Y/N): ";
        cin >> isDelayed;
    }

    void calculateFee() {
        totalFee = monthlyFee * numberOfMonths;

        if (isDelayed == 'Y' || isDelayed == 'y') {
            lateFine = 500;
        } else {
            lateFine = 0;
        }

        finalAmount = totalFee + lateFine;
    }

    void display() {
        cout << "\n----- Hostel Fee Receipt -----" << endl;
        cout << "Student Name    : " << studentName << endl;
        cout << "Hostel ID       : " << hostelID << endl;
        cout << "Monthly Fee     : " << monthlyFee << endl;
        cout << "Number of Months: " << numberOfMonths << endl;
        cout << "Total Fee       : " << totalFee << endl;
        cout << "Late Fine       : " << lateFine << endl;
        cout << "Final Amount    : " << finalAmount << endl;
    }
};

int main() {
    HostelFee student;

    student.acceptDetails();
    student.calculateFee();
    student.display();

    return 0;
}