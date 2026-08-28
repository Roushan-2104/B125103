#include <iostream>
using namespace std;

int search(int arr[], int size, int ele){
    for(int i = 0; i < size; i++){
        if(arr[i] == ele){
            return i;
        }
    }
    return -1;
}

int search(char arr[], int size, char ele){
    for(int i = 0; i<size; i++){
        if(arr[i] == ele){
            return i;
        }
    }
    return -1;
}

int search(int arr[],int start,int end, int ele){
    for(int i = start; i<=end; i++){
        if(arr[i] == ele) return i;
    }
    return -1;
}

int main() {
       int intArr[6] = {4, 8, 15, 16, 23, 42};
    char charArr[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

    int pos1 = search(intArr, 6, 16);
    if (pos1 != -1)
        cout << "Integer 16 found at index " << pos1 << endl;
    else
        cout << "Integer 16 not found" << endl;

    int pos2 = search(charArr, 6, 'd');
    if (pos2 != -1)
        cout << "Character 'd' found at index " << pos2 << endl;
    else
        cout << "Character 'd' not found" << endl;

    // Search for 42 only within index range [3, 5]
    int pos3 = search(intArr, 3,5, 42);
    if (pos3 != -1)
        cout << "Integer 42 found at index " << pos3 << " within range [3,5]" << endl;
    else
        cout << "Integer 42 not found within range [3,5]" << endl;

    return 0;
    
}