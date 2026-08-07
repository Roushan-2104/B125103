#include <iostream>
using namespace std;
class Temperature{
    private:
        float celsius, fahrenheit;
    
    public:
        void readCel(){
            cout<<"Enter Temperature in Celsius: ";
            cin>>celsius;
        }
        void convertTf(){
            fahrenheit = ((9/5)*celsius) + 32;
            cout<<endl<<"Conversion done !!!"<<endl;
        }
        void display(){
            
            cout<<"Temperature in Celsius: "<<celsius<<" C"<<endl;
            cout<<"Converted to....."<<endl;
            cout<<"Temperature in Fahrenheit: "<<fahrenheit<<" F"<<endl;
        }
};
int main() {
    Temperature t1;

    t1.readCel();
    t1.convertTf();
    cout<<endl;
    t1.display();
    return 0;
}