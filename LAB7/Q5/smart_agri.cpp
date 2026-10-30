#include <iostream>
using namespace std;

class Sensor{
    protected:
        int id;
    public:
        Sensor(int i){
            id = i;
        }
};
class Temperature : virtual public Sensor{
    protected:
        double temp;

    public:
        Temperature(int i, int t) : Sensor(id){
            id = i;
            temp = t;
        }
};
class Humidity : virtual public Sensor{
    protected:
        double humid_P;

    public:
        Humidity(int i, int h): Sensor(id){
            id = i;
            humid_P = h;
        }
};
class FarmMonitor : public Temperature,
                    public Humidity{
    public:
    FarmMonitor(int i, double t, double h)
        : Sensor(i), Temperature(i, t), Humidity(i, h) {}

        void display() {
        cout << "Sensor ID: " << id << endl;
        cout << "Temperature: " << temp
             << " Celsius" << endl;
        cout << "Humidity: " << humid_P << "%" << endl;

        if (temp > 35 || humid_P > 80)
            cout << "Warning: Unsafe Farm Conditions!" << endl;
        else
            cout << "Farm Conditions are Normal" << endl;
    }
};

int main() {
    FarmMonitor f(101, 38, 85);
    f.display();
    return 0;
}