
#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}

int calculate(int a, int b, int c) {
    return a + b + c;
}

float calculate(float a, float b) {
    return a + b;
}

int main() {
    int i1 = 10, i2 = 20, i3 = 30;
    float f1 = 5.5, f2 = 4.5;

    cout << "Sum of two integers (" << i1 << " + " << i2 << ") = "
         << calculate(i1, i2) << endl;

    cout << "Sum of three integers (" << i1 << " + " << i2 << " + " << i3 << ") = "
         << calculate(i1, i2, i3) << endl;

    cout << "Sum of two floats (" << f1 << " + " << f2 << ") = "
         << calculate(f1, f2) << endl;

    return 0;
}
