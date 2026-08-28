
#include <iostream>
using namespace std;

int count(int number) {
    if (number == 0) return 1;
    if (number < 0) number = -number;
    int digits = 0;
    while (number > 0) {
        digits++;
        number /= 10;
    }
    return digits;
}

int count(int arr[], int size) {
    return size;
}

int count(char arr[], int size, char target) {
    int occurrences = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            occurrences++;
    return occurrences;
}

int main() {
    int number = 928374;
    cout << "Number of digits in " << number << " = " << count(number) << endl;

    int arr[7] = {5, 10, 15, 20, 25, 30, 35};
    cout << "Number of elements in the integer array = " << count(arr, 7) << endl;

    char charArr[10] = {'b', 'a', 'n', 'a', 'n', 'a', 's', 'a', 'r', 'e'};
    char target = 'a';
    cout << "Occurrences of '" << target << "' in the character array = "
         << count(charArr, 10, target) << endl;

    return 0;
}
