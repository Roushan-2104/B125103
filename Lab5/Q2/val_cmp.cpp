
#include <iostream>
using namespace std;

int larger(int a, int b) {
    return (a > b) ? a : b;
}

float larger(float a, float b) {
    return (a > b) ? a : b;
}

int larger(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int i1 = 15, i2 = 42, i3 = 7;
    float f1 = 3.2, f2 = 8.9;

    cout << "Larger of two integers (" << i1 << ", " << i2 << ") = "
         << larger(i1, i2) << endl;

    cout << "Larger of two floats (" << f1 << ", " << f2 << ") = "
         << larger(f1, f2) << endl;

    cout << "Largest of three integers (" << i1 << ", " << i2 << ", " << i3 << ") = "
         << larger(i1, i2, i3) << endl;

    return 0;
}
