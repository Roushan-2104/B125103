#include <iostream>
using namespace std;

class HotelRoom{
    private:
        int roomNum;
        string guestName;
        int stayDur;
        float costPday, totalRent;
    
    public:
        void acceptDetails(){
            cout<<"Enter Room Number: ";
            cin>>roomNum;
            cout<<"Enter Name of the Guest: ";
            cin>> guestName;
            cout<<"What is the duration of stay? (In days): ";
            cin>>stayDur;
            cout<<"Enter Cost per Day (in Rs): ";
            cin>>costPday;
        }

        void calcRent(){
            totalRent = costPday*stayDur;
        }
        void display(){
            cout<<"Name: "<<guestName<<endl;
            cout<<"Room Number: "<<roomNum<<endl;
            cout<<"Number of Days Stayed: "<<stayDur<<endl;
            cout<<"Cost Per Day (in Rs): "<<costPday<<endl;
            cout<<"Total Room rent: "<<totalRent<<endl;
        }
};

int main() {
    HotelRoom h1;

    cout<<endl<<"--------------Enter Booking Details--------------"<<endl;
    h1.acceptDetails();

    h1.calcRent();

    cout<<endl<<"--------------Here is the booking details (WITH TOTAL ROOM RENT)--------------"<<endl;
    h1.display();
    return 0;
}