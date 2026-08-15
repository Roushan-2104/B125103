#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "Array in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }

    delete[] arr;
    arr = nullptr;
    return 0;
}
