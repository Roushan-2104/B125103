
#include <iostream>
using namespace std;

int modify(int value, int addValue) {
    return value + addValue;
}

float modify(float value, float addValue) {
    return value + addValue;
}

void modify(int *value, int addValue) {
    *value = *value + addValue;
}

int main() {
    int i = 10;
    float f = 5.5;
    int ptrVal = 20;

    cout << "Integer before modification: " << i << endl;
    int newI = modify(i, 5);
    cout << "Integer after adding 5: " << newI << endl << endl;

    cout << "Float before modification: " << f << endl;
    float newF = modify(f, 2.5f);
    cout << "Float after adding 2.5: " << newF << endl << endl;

    cout << "Pointer-based integer before modification: " << ptrVal << endl;
    modify(&ptrVal, 15);
    cout << "Pointer-based integer after adding 15: " << ptrVal << endl;

    return 0;
}
