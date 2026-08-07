#include <iostream>
using namespace std;

class Square{
    private:
        float sideL;
        float area;
        float perimeter;
    
    public:
        void readL(){
            cout<<"Enter side length: ";
            cin>>sideL;
        }
        void areaS(){
            area = sideL*sideL;
         
        }
        void perimeterS(){
            perimeter = 4*sideL;
            
        }
        void display(){
            cout<<"Area of square of side "<<sideL<<" is "<<area<<endl;
            cout<<"Perimeter of square of side "<<sideL<<" is "<<perimeter<<endl;
        }
};

int main() {
    Square s1;

    s1.readL();
    s1.areaS();
    s1.perimeterS();
    cout<<endl;
    s1.display();
    return 0;
}