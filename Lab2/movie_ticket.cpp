#include <iostream>
using namespace std;
class MovieTicket{
    private:
        int numTick;
        string movName;
        
        float tickPrice, totalCost;
    
    public:
        void acceptDetails(){
            cout<<"Enter Movie Name: ";
            cin>>movName;
            cout<<"Enter Ticket Price: ";
            cin>> tickPrice;
            cout<<"Enter Number of tickets: ";
            cin>>numTick;
            
        }

        void calcCost(){
            totalCost = tickPrice*numTick;
        }
        void display(){
            cout<<"Movie Name: "<<movName<<endl;
            cout<<"Number of Tickets: : "<<numTick<<endl;
            cout<<"Total Bill"<< "(" <<tickPrice<<" per ticket): "<<totalCost<<endl;
            
        }
};
int main() {
    MovieTicket m1;

    cout<<endl<<"--------Enter Booking Details--------"<<endl;
    cout<<endl;
    m1.acceptDetails();
    cout<<endl;
    m1.calcCost();
    cout<<"--------Booking Summary--------"<<endl;
    cout<<endl;
    m1.display();
    return 0;
}