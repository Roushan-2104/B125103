#include <iostream>
using namespace std;

class Duration{
    int hrs;
    int mins;

    
    public:
        Duration(int h = 0, int m = 0) {
        hrs = h + m / 60;
        mins = m % 60;
    }
        Duration operator+(Duration d){
            return Duration(hrs+d.hrs, mins+d.mins);
        }
        Duration operator-(Duration d){
            return Duration(hrs-d.hrs, mins-d.mins);
        }
        void display(){
            cout << hrs << ":"<<mins<<endl;
        }
        
};

int main() {
    Duration d1(10,56), d2(9, 40);

    cout<<"Addition: ";
    (d1+d2).display();

    cout<<"Subtraction: ";
    (d1-d2).display();

    return 0;
}