#include <iostream>
using namespace std;

int process(int a, int b) {
    return a + b;
}

float process(int a, float b) {
    return a + b;
}

float process(float a, float b) {
    return a + b;
}

int process(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int process(int *a, int *b) {
    return (*a) + (*b);
}

int main() {
    int i1 = 8, i2 = 12;
    float f1 = 4.5, f2 = 6.25;

    cout << "process(int, int) -> " << i1 << " + " << i2 << " = "
         << process(i1, i2) << endl;

    cout << "process(int, float) -> " << i1 << " + " << f1 << " = "
         << process(i1, f1) << endl;

    cout << "process(float, float) -> " << f1 << " + " << f2 << " = "
         << process(f1, f2) << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    cout << "process(int array, size) -> sum of array = "
         << process(arr, 5) << endl;

    int p1 = 100, p2 = 250;
    cout << "process(int*, int*) -> " << p1 << " + " << p2 << " = "
         << process(&p1, &p2) << endl;

    return 0;
}
