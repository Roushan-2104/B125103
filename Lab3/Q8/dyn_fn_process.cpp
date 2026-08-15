#include <iostream>
#include <limits.h>
using namespace std;

void accept(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<"Element "<<i<<" : ";
        cin>>*(arr+i);
    }
}
int sum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += *(arr+i);
    }
    return sum;
}
int min(int *arr, int n){
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        mini = min(*(arr+i),mini);
    }
    return mini;
}
int max(int *arr, int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        maxi = max(*(arr+i),maxi);
    }
    return maxi;
}

int main() {
    int n;
    cout<<"Enter the length of an Array: ";
    cin>>n;
    
    int *arr = new int[n];
    
    accept(arr, n);
    cout << "Sum: " << sum(arr, n) << endl;
    cout << "Minimum: " << min(arr, n) << endl;
    cout << "Maximum: " << max(arr, n) << endl;

    delete[] arr;
    arr = nullptr;
    return 0;
}