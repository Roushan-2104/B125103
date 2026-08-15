#include <iostream>
using namespace std;

int main() {
    int *num1 = new int, *num2 = new int;
    cout << "Enter first integer: ";
    cin >> *num1;
    cout << "Enter second integer: ";
    cin >> *num2;
    cout<<endl;
    cout << "Sum: " << *num1 + *num2 << endl;
    cout << "Difference: " << *num1 - *num2 << endl;
    cout << "Product: " << *num1 * *num2 << endl;
    cout << "Quotient: " << *num1 / *num2 << endl;

    delete num1;
    delete num2;
    num1 = nullptr;
    num2 = nullptr;
    return 0;
}
