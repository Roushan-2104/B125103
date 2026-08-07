#include <iostream>
using namespace std;

class Car{
    int carNum;
    string brand;
    int modelY;

    public:
        void detInp(){
            cout<<"Enter the Car Number: ";
            cin>>carNum;
            cout<<"Enter Brand Name: ";
            cin>>brand;
            cout<<"Enter Model Year: ";
            cin>>modelY;
        }
        void display(){
            cout<<"Car Name: "<<brand << endl;
            cout<<"Car Numbr: "<<carNum<< endl;
            cout<<"Model Year: "<<modelY<<endl;
        }

};

int main() {
    Car c1;

    cout<<"---------Input details--------"<<endl;
    c1.detInp();

    cout<<endl<<"---------Here is the Care Details-----------" << endl;
    c1.display();

    return 0;
}