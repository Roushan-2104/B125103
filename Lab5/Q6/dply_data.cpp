#include <iostream>
using namespace std;

void display(int value) {
    cout << "Integer value: " << value << endl;
}

void display(float value) {
    cout << "Float value: " << value << endl;
}

void display(char value) {
    cout << "Character value: " << value << endl;
}

void display(int arr[], int size) {
    cout << "Integer array elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void display(char arr[], int size) {
    cout << "Character array elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int intArr[5] = {1, 2, 3, 4, 5};
    char charArr[5] = {'x', 'y', 'z', 'p', 'q'};

    display(100);
    display(3.14f);
    display('A');
    display(intArr, 5);
    display(charArr, 5);

    return 0;
}
