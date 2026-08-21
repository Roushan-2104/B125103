#include <iostream>
#include <string>
using namespace std;

class TicketChecker; 

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool isBooked;

public:
    TrainSeat(int seat, string passenger, bool booked) {
        seatNumber = seat;
        passengerName = passenger;
        isBooked = booked;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void displaySeatDetails(TrainSeat t) {
        cout << "----- Seat Details -----" << endl;
        cout << "Seat Number: " << t.seatNumber << endl;
    }

    void checkBookingStatus(TrainSeat t) {
        if (t.isBooked) {
            cout << "Status     : Booked" << endl;
            cout << "Passenger  : " << t.passengerName << endl;
        } else {
            cout << "Status     : Available" << endl;
        }
    }
};

int main() {
    TrainSeat seat1(23, "Priya Sharma", true);
    TrainSeat seat2(24, "", false);

    TicketChecker checker;

    checker.displaySeatDetails(seat1);
    checker.checkBookingStatus(seat1);

    cout << endl;

    checker.displaySeatDetails(seat2);
    checker.checkBookingStatus(seat2);

    return 0;
}
