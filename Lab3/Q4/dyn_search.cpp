#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    int search;
    cout << "Enter element to search: ";
    cin >> search;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (*(arr + i) == search) {
            cout << "Element found at position " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    delete[] arr;
    arr = nullptr;
    return 0;
}
