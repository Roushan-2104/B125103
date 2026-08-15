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

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) even++;
        else odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    delete[] arr;
    arr = nullptr;
    return 0;
}
