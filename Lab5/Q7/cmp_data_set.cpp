
#include <iostream>
using namespace std;

void compare(int a, int b) {
    cout << "Larger value between " << a << " and " << b << " is "
         << ((a > b) ? a : b) << endl;
}

void compare(float a, float b) {
    cout << "Larger value between " << a << " and " << b << " is "
         << ((a > b) ? a : b) << endl;
}

void compare(int arr1[], int arr2[], int size) {
    bool identical = true;
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }
    if (identical)
        cout << "The two integer arrays are identical." << endl;
    else
        cout << "The two integer arrays are NOT identical." << endl;
}

int main() {
    compare(25, 40);
    compare(3.7f, 2.1f);

    int arrA[5] = {1, 2, 3, 4, 5};
    int arrB[5] = {1, 2, 3, 4, 5};
    int arrC[5] = {1, 2, 9, 4, 5};

    cout << "Comparing arrA and arrB: ";
    compare(arrA, arrB, 5);

    cout << "Comparing arrA and arrC: ";
    compare(arrA, arrC, 5);

    return 0;
}
