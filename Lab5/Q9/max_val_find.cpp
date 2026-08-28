#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int findMax(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int x = 12, y = 27;
    cout << "Max of two integers (" << x << ", " << y << ") = "
         << findMax(x, y) << endl;

    cout << "Max of two integers via pointers (" << x << ", " << y << ") = "
         << findMax(&x, &y) << endl;

    int arr[6] = {45, 12, 89, 33, 67, 21};
    cout << "Max of array elements = " << findMax(arr, 6) << endl;

    return 0;
}
