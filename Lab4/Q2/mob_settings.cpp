#include <iostream>
using namespace std;

class Mobile{
    private:
        string brand;
        string model;
        int battery;
    
    public:
        Mobile(string b, string m, int percentage){
            brand = b;
            model = m;
            battery = percentage;
        }

        friend void checkPercentage(Mobile m1);
};
void checkPercentage(Mobile m){
    cout<<endl<<"---Mobile Details---"<<endl;
    cout<<"Brand: "<<m.brand<<endl;
    cout<<"Model: "<<m.model<<endl;
    cout<<"Battery (%): "<<m.battery<<endl;

    if(m.battery<20){
        cout<<endl<<"Battery is Low!!!"<<endl;
    }else{
        cout<<"Battery Normal!"<<endl;
    }
}
int main() {
    Mobile m1("Apple", "18 PRO MAX", 12);
    checkPercentage(m1);

    cout<<endl;
    
    Mobile m2("Samsung", "S50", 55);
    checkPercentage(m2);
    return 0;
}