#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }

    void display() {
        cout << hours << " hr " << minutes << " min" << endl;
    }

    Time addTime(Time t2) {
        Time t3;
        t3.minutes = minutes + t2.minutes;
        t3.hours = hours + t2.hours;

        // Convert every 60 minutes into 1 hour
        t3.hours += t3.minutes / 60;
        t3.minutes = t3.minutes % 60;

        return t3;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "Enter second time:" << endl;
    t2.input();

    t3 = t1.addTime(t2);

    cout << "\nFirst time: ";
    t1.display();

    cout << "Second time: ";
    t2.display();

    cout << "Sum: ";
    t3.display();

    return 0;
}