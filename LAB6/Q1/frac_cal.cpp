#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

class Fraction {
    int num, den;

    void simplify() {
        int g = __gcd(num, den);
        num /= g;
        den /= g;

        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

public:
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
        simplify();
    }

    Fraction operator+(Fraction f) {
        return Fraction(num * f.den + f.num * den,
                        den * f.den);
    }

    Fraction operator-(Fraction f) {
        return Fraction(num * f.den - f.num * den,
                        den * f.den);
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);

    cout << "Addition: ";
    (f1 + f2).display();

    cout << "Subtraction: ";
    (f1 - f2).display();

    return 0;
}