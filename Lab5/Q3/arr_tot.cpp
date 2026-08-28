
#include <iostream>
using namespace std;

int total(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

float total(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int total(int arr[], int size, int countToConsider) {
    int sum = 0;
    for (int i = 0; i < countToConsider && i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int intArr[5] = {10, 20, 30, 40, 50};
    float floatArr[4] = {1.5, 2.5, 3.5, 4.5};

    cout << "Total of full integer array = " << total(intArr, 5) << endl;

    cout << "Total of float array = " << total(floatArr, 4) << endl;

    int n = 3;
    cout << "Total of first " << n << " elements of integer array = "
         << total(intArr, 5, n) << endl;

    return 0;
}
