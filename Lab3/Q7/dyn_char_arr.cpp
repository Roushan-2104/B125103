#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    cout << "Enter string length: ";
    cin >> n;
    char *str = new char[n+1];
    // cin.ignore(); // Ignore newline
    cin.getline(str, n+1);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        } else if (ch >= '0' && ch <= '9') digits++;
        else if (ch == ' ') spaces++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    delete[] str;
    str = nullptr;
    return 0;
}
